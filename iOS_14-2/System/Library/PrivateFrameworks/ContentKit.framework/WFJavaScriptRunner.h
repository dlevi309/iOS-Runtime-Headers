/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <VoiceShortcutClient/WFSingleConnectionXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WFJavaScriptRunnerHostProtocol.h>

@class NSItemProvider, NSString;

@interface WFJavaScriptRunner : WFSingleConnectionXPCListener <NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol> {

	NSItemProvider* _itemProvider;

}

@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSItemProvider *)itemProvider;
-(id)initWithItemProvider:(id)arg1 ;
-(void)runJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

