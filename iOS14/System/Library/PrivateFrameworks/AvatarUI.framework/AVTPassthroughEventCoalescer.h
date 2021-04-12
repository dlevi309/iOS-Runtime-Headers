/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTEventCoalescer.h>

@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer> {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)eventDidOccur:(/*^block*/id)arg1 ;
-(id)handler;
@end

