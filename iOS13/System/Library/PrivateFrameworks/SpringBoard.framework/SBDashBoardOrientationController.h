/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSOrientationUpdateControlling.h>

@protocol BSInvalidatable;
@class NSString;

@interface SBDashBoardOrientationController : NSObject <CSOrientationUpdateControlling> {

	id<BSInvalidatable> _deferOrientationUpdatesAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3 ;
-(void)deferOrientationUpdatesWithReason:(id)arg1 ;
-(void)cancelOrientationUpdateDeferral;
@end

