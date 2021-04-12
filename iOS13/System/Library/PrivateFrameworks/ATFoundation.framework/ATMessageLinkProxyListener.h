/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)start;
-(id)endpoint;
-(ATMessageLink *)messageLink;
-(id)initWithMessageLink:(id)arg1 ;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
@end

