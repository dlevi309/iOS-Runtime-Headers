/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/AKAdaptiveServiceInterface.h>

@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {

	id _weakReceiver;
	id _strongReceiver;

}
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)activate;
-(id)initWithStrongReceiver:(id)arg1 ;
-(id)initWithWeakReceiver:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 strong:(BOOL)arg2 ;
@end

