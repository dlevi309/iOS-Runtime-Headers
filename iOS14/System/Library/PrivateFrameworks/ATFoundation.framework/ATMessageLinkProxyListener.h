/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, ATMessageLink, NSString;

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ATMessageLink* _messageLink;

}

@property (nonatomic,retain) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(ATMessageLink *)messageLink;
-(id)endpoint;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithMessageLink:(id)arg1 ;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
@end

