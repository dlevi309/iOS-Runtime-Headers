/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFWebSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/WFProviderContext.h>

@protocol WFNetworkListRecord;
@class WFWebSheetViewController, NSTimer, NSString;

@interface WFCaptiveContext : NSObject <WFWebSheetViewControllerDelegate, WFProviderContext> {

	BOOL _readyForPresentation;
	id<WFNetworkListRecord> network;
	long long requestedFields;
	/*^block*/id _readyForPresentationHandler;
	/*^block*/id _completionHandler;
	WFWebSheetViewController* _webSheetViewController;
	NSTimer* _timer;

}

@property (nonatomic,retain) WFWebSheetViewController * webSheetViewController;              //@synthesize webSheetViewController=_webSheetViewController - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL readyForPresentation;                                      //@synthesize readyForPresentation=_readyForPresentation - In the implementation block
@property (nonatomic,copy) id readyForPresentationHandler;                                   //@synthesize readyForPresentationHandler=_readyForPresentationHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<WFNetworkListRecord> network; 
@property (nonatomic,readonly) long long requestedFields; 
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id<WFNetworkListRecord>)network;
-(id)completionHandler;
-(void)cancel;
-(long long)requestedFields;
-(void)setReadyForPresentation:(BOOL)arg1 ;
-(BOOL)readyForPresentation;
-(void)_presentationTimerFired:(id)arg1 ;
-(WFWebSheetViewController *)webSheetViewController;
-(void)_readyForPresentation:(id)arg1 ;
-(id)readyForPresentationHandler;
-(void)webSheetViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)webSheetViewControllerContentReadyForPresentation:(id)arg1 ;
-(void)setReadyForPresentationHandler:(id)arg1 ;
-(void)setWebSheetViewController:(WFWebSheetViewController *)arg1 ;
@end

