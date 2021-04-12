/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WKScriptMessageHandler>)target;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
@end

