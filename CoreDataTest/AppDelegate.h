//
//  AppDelegate.h
//  CoreDataTest
//
//  Created by Myungsun Kim on 2015. 5. 14..
//  Copyright (c) 2015년 Michael M. Kim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

// Core Data properties.
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObejctModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistenceStoreCoordinator;

// Core Data public methods
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

