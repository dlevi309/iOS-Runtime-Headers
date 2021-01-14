/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol BSInvalidatable;
#import <PassKitUI/PassKitUI-Structs.h>
@class NSString;

@interface PKIdleTimerAssertion : NSObject {

	atomic_flag _invalidated;
	NSString* _reason;
	id<BSInvalidatable> _idleTimerAssertion;

}
-(id)init;
-(id)initWithReason:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

