/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKSHIDEventObserverServerInterface.h>
#import <libobjc.A.dylib/BKHIDEventDeliveryResolutionObserver.h>

@class BSMutableIntegerMap, BKHIDEventDeliveryObserverServiceListener, NSMutableIndexSet, NSString;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver> {

	BSMutableIntegerMap* _connectionsByPID;
	BKHIDEventDeliveryObserverServiceListener* _serviceListener;
	NSMutableIndexSet* _observerPIDs;
	os_unfair_lock_s _lock;
	BSMutableIntegerMap* _resolutionsByPID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resolutionsDidChange:(id)arg1 forPID:(int)arg2 ;
-(void)addConnection:(id)arg1 forPID:(int)arg2 ;
-(id)setObservesDeferringResolutions:(id)arg1 ;
-(void)removeConnectionForPID:(int)arg1 ;
@end

