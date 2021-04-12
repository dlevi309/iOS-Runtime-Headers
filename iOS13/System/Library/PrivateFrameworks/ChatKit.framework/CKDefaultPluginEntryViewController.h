/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKPluginEntryViewController.h>

@protocol CKTranscriptBalloonPluginController;
@class IMBalloonPluginDataSource, UIViewController, CKBalloonView, IMBalloonPlugin, NSString;

@interface CKDefaultPluginEntryViewController : UIViewController <CKPluginEntryViewController> {

	IMBalloonPluginDataSource* _datasource;
	UIViewController*<CKTranscriptBalloonPluginController> _pluginBubbleViewController;
	CKBalloonView* _balloonView;
	IMBalloonPlugin* _plugin;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * datasource;                                                         //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) UIViewController*<CKTranscriptBalloonPluginController> pluginBubbleViewController;              //@synthesize pluginBubbleViewController=_pluginBubbleViewController - In the implementation block
@property (nonatomic,retain) CKBalloonView * balloonView;                                                                    //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                                                       //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CKPluginEntryViewControllerDelegate> entryViewDelegate; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
-(void)dealloc;
-(void)loadView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)setDatasource:(IMBalloonPluginDataSource *)arg1 ;
-(IMBalloonPluginDataSource *)datasource;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)performHostAppResume;
-(void)performHostAppSuspend;
-(void)payloadWillSend;
-(UIViewController*<CKTranscriptBalloonPluginController>)pluginBubbleViewController;
-(void)setPluginBubbleViewController:(UIViewController*<CKTranscriptBalloonPluginController>)arg1 ;
-(void)_loadBalloonView;
-(void)didFinishAnimatedBoundsChange;
-(id)_imageBalloon;
-(id)_transcriptPluginBalloon;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 ;
-(void)payloadWillClear;
-(BOOL)wantsClearButton;
-(BOOL)wantsEdgeToEdgeLayout;
-(BOOL)loadedContentView;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3 ;
@end

