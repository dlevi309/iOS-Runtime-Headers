/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSXPCListenerEndpoint;

@interface WFJavaScriptRunClient : NSObject {

	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(id)initWithEndpoint:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)runJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

