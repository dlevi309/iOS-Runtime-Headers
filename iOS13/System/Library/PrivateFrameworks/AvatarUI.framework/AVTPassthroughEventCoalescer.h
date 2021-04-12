/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTEventCoalescer.h>

@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer> {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)eventDidOccur:(/*^block*/id)arg1 ;
@end

