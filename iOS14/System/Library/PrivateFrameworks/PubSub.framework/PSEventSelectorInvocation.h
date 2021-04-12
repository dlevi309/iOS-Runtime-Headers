/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <libobjc.A.dylib/PSEventInvocation.h>

@class NSString;

@interface PSEventSelectorInvocation : NSObject <PSEventInvocation> {

	id _receiver;
	SEL _selector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invokeWithEvent:(id)arg1 forTopicWithName:(id)arg2 ;
-(id)initWithReceiver:(id)arg1 selector:(SEL)arg2 ;
@end

