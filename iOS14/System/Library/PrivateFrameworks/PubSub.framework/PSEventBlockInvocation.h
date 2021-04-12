/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <libobjc.A.dylib/PSEventInvocation.h>

@class NSString;

@interface PSEventBlockInvocation : NSObject <PSEventInvocation> {

	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)invokeWithEvent:(id)arg1 forTopicWithName:(id)arg2 ;
@end

