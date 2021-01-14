/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)lock;
-(void)setDestructionObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)destructionObservers;
-(void)setLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeDestructionObserver:(CalRelationRef)arg1 ;
-(void)addDestructionObserver:(CalRelationRef)arg1 ;
-(void)notifyOfEntityDestruction;
-(void)dealloc;
@end

