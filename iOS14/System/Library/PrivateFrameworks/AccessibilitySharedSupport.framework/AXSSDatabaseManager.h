/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject {

	int _lockNotificationToken;
	BOOL _isScreenedLocked;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) BOOL canSave; 
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedDatabase;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)canSave;
-(void)userAuthChanged;
-(id)init;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)dealloc;
-(id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3 ;
@end

