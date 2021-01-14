/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/SWMessageHandlerManager.h>

@protocol SWMessageHandlerManager <NSObject>
@required
-(void)addMessageHandler:(id)arg1 name:(id)arg2;

@end


@protocol SWLogger;
@class NSMutableDictionary, NSString;

@interface SWMessageHandlerManager : NSObject <WKScriptMessageHandler, SWMessageHandlerManager> {

	id<SWLogger> _logger;
	NSMutableDictionary* _messageHandlers;

}

@property (nonatomic,readonly) id<SWLogger> logger;                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * messageHandlers;              //@synthesize messageHandlers=_messageHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(id<SWLogger>)logger;
-(void)addMessageHandler:(id)arg1 name:(id)arg2 ;
-(id)initWithUserContentController:(id)arg1 logger:(id)arg2 ;
-(NSMutableDictionary *)messageHandlers;
@end

