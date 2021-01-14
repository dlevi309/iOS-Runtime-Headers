/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageHandler.h>

@protocol SWMessageHandler;
@class NSString;

@interface SWWeakMessageHandler : NSObject <SWMessageHandler> {

	id<SWMessageHandler> _messageHandler;

}

@property (nonatomic,__weak,readonly) id<SWMessageHandler> messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handlerWithMessageHandler:(id)arg1 ;
-(id<SWMessageHandler>)messageHandler;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
@end

