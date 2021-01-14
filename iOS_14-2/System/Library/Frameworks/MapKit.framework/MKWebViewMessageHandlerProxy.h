/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@protocol WKScriptMessageHandler;
@class NSString;

@interface MKWebViewMessageHandlerProxy : NSObject <WKScriptMessageHandler> {

	id<WKScriptMessageHandler> _target;

}

@property (assign,nonatomic,__weak) id<WKScriptMessageHandler> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<WKScriptMessageHandler>)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(id<WKScriptMessageHandler>)target;
@end

