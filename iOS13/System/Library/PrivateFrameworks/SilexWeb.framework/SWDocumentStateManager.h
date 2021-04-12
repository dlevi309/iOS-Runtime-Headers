/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/SWDocumentStateProviding.h>
#import <libobjc.A.dylib/SWDocumentStateReporting.h>

@class WKUserContentController, NSMutableArray, NFStateMachine, NSString;

@interface SWDocumentStateManager : NSObject <WKScriptMessageHandler, SWDocumentStateProviding, SWDocumentStateReporting> {

	WKUserContentController* _userContentController;
	NSMutableArray* _onReadyBlocks;
	NSMutableArray* _onLoadBlocks;
	NSMutableArray* _onUnloadBlocks;
	NFStateMachine* _stateMachine;

}

@property (nonatomic,readonly) WKUserContentController * userContentController;              //@synthesize userContentController=_userContentController - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onReadyBlocks;                               //@synthesize onReadyBlocks=_onReadyBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onLoadBlocks;                                //@synthesize onLoadBlocks=_onLoadBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onUnloadBlocks;                              //@synthesize onUnloadBlocks=_onUnloadBlocks - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NFStateMachine *)stateMachine;
-(WKUserContentController *)userContentController;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)onUnload:(/*^block*/id)arg1 ;
-(void)onLoad:(/*^block*/id)arg1 ;
-(NSMutableArray *)onLoadBlocks;
-(NSMutableArray *)onReadyBlocks;
-(NSMutableArray *)onUnloadBlocks;
-(void)documentIsReady;
-(void)onReady:(/*^block*/id)arg1 ;
-(void)documentStartedLoading;
-(void)documentWillUnload;
-(id)initWithUserContentController:(id)arg1 ;
@end

