/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

