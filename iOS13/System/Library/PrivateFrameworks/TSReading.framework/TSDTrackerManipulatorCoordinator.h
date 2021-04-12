/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDTrackerManipulator;
@class NSMutableSet, NSObject;

@interface TSDTrackerManipulatorCoordinator : NSObject {

	NSMutableSet* mRegisteredTMs;
	NSObject*<TSDTrackerManipulator> mControllingTM;

}

@property (nonatomic,readonly) NSObject*<TSDTrackerManipulator> controllingTM; 
+(void)p_removeDynamicSubclass:(id)arg1 ;
+(void)p_dynamicallySubclassGRForNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)registerTrackerManipulator:(id)arg1 ;
-(BOOL)takeControlWithTrackerManipulator:(id)arg1 ;
-(NSObject*<TSDTrackerManipulator>)controllingTM;
-(void)operationDidEnd;
-(void)operationWillEnd;
-(BOOL)hasRegisteredTrackerManipulator:(id)arg1 ;
-(void)p_notifyControlChange;
-(BOOL)relinquishTrackerManipulatorControl:(id)arg1 ;
-(void)unregisterTrackerManipulator:(id)arg1 ;
@end

