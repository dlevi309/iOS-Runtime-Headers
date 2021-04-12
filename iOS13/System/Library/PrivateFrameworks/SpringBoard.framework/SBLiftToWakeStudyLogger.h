/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBLiftToWakeObserver.h>

@class SLGLog, SBLiftToWakeController, NSString;

@interface SBLiftToWakeStudyLogger : NSObject <SBLiftToWakeObserver> {

	SLGLog* _logger;
	SBLiftToWakeController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithController:(id)arg1 ;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3 ;
@end

