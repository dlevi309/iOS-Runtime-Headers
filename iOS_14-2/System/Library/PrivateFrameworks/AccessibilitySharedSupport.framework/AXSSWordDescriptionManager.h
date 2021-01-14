/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSString;

@interface AXSSWordDescriptionManager : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSString* languageDialectCode;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSString * languageDialectCode; 
+(id)sharedInstance;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
-(id)languageCode;
-(NSManagedObjectModel *)managedObjectModel;
-(NSString *)languageDialectCode;
-(id)descriptionForWord:(id)arg1 ;
-(void)setLanguageDialectCode:(NSString *)arg1 ;
@end

