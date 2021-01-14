/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

