/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithController:(id)arg1 ;
-(void)dealloc;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3 ;
@end

