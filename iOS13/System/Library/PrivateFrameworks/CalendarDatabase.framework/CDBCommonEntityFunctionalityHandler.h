/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@protocol OS_dispatch_queue;
#import <CalendarDatabase/CalendarDatabase-Structs.h>
@class NSObject, NSMutableSet;

@interface CDBCommonEntityFunctionalityHandler : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableSet* _destructionObservers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lock;                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * destructionObservers;              //@synthesize destructionObservers=_destructionObservers - In the implementation block
+(void)_notifyDestructionObservers:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)lock;
-(void)setLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeDestructionObserver:(CalRelationRef)arg1 ;
-(void)addDestructionObserver:(CalRelationRef)arg1 ;
-(void)notifyOfEntityDestruction;
-(void)setDestructionObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)destructionObservers;
@end

