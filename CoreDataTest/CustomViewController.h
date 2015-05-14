//
//  CustomViewController.h
//  CoreDataTest
//
//  Created by Myungsun Kim on 2015. 5. 14..
//  Copyright (c) 2015년 Michael M. Kim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface CustomViewController : UIViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
