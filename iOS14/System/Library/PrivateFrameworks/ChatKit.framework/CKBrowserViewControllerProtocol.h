/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class UIViewController, IMBalloonPlugin, IMBalloonPluginDataSource, NSString, NSArray, NSData, CKBrowserDragManager, NSNumber;


@protocol CKBrowserViewControllerProtocol <NSObject>
@property (nonatomic,retain) UIViewController * presentationViewController; 
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate; 
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin; 
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource; 
@property (assign,nonatomic) BOOL isiMessage; 
@property (assign,nonatomic) NSString * conversationID; 
@property (nonatomic,readonly) BOOL wantsDarkUI; 
@property (nonatomic,readonly) BOOL wantsOpaqueUI; 
@property (nonatomic,readonly) BOOL supportsQuickView; 
@property (nonatomic,readonly) BOOL shouldSuppressEntryView; 
@property (assign,nonatomic) BOOL isPrimaryViewController; 
@property (getter=isDismissing,nonatomic,readonly) BOOL dismissing; 
@property (nonatomic,readonly) BOOL mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) long long browserPresentationStyle; 
@property (nonatomic,readonly) BOOL shouldShowChatChrome; 
@property (nonatomic,readonly) BOOL inExpandedPresentation; 
@property (nonatomic,readonly) BOOL inFullScreenModalPresentation; 
@property (nonatomic,retain) NSString * sender; 
@property (nonatomic,retain) NSArray * recipients; 
@property (nonatomic,readonly) BOOL wasExpandedPresentation; 
@property (nonatomic,retain) NSData * conversationEngramID; 
@property (nonatomic,readonly) unsigned long long badgeValue; 
@property (nonatomic,readonly) CKBrowserDragManager * browserDragManager; 
@property (assign,nonatomic) long long currentBrowserConsumer; 
@property (nonatomic,readonly) UIViewController * remoteViewController; 
@property (nonatomic,readonly) CGRect horizontalSwipeExclusionRect; 
@property (nonatomic,readonly) BOOL canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,readonly) long long parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
@optional
-(NSArray *)recipients;
-(unsigned long long)badgeValue;
-(void)prepareForDisplay;
-(NSString *)sender;
-(UIViewController *)remoteViewController;
-(void)setSender:(id)arg1;
-(void)setRecipients:(id)arg1;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
-(void)killExtensionProcess;
-(void)deferredForceTearDownRemoteView;
-(void)forceTearDownRemoteView;
-(BOOL)canReplaceDataSource;
-(void)browserScrolledOnScreen;
-(id<UIViewControllerTransitioningDelegate>)parentTransitioningDelegate;
-(void)loadRemoteView;
-(id)requestSnapshotDataForPersistance;
-(void)beginSuppressingAppearanceMethods;
-(void)endSuppressingAppearanceMethods;
-(id)cancelTouchesInView;
-(void)unloadRemoteView;
-(void)saveSnapshotForBrowserViewController;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)browserScrolledOffScreen;
-(void)dropAssertion;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)volumeButtonPressed:(BOOL)arg1;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(void)messageAddedWithDataSource:(id)arg1;
-(void)setStoreLaunchURL:(id)arg1 sourceApplication:(id)arg2;
-(BOOL)wasExpandedPresentation;
-(NSData *)conversationEngramID;
-(void)setConversationEngramID:(id)arg1;
-(CKBrowserDragManager *)browserDragManager;
-(long long)currentBrowserConsumer;
-(void)setCurrentBrowserConsumer:(long long)arg1;
-(CGRect)horizontalSwipeExclusionRect;
-(long long)parentModalPresentationStyle;
-(void)setAdamID:(id)arg1;
-(NSNumber *)adamID;

@required
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
-(id)initWithBalloonPlugin:(id)arg1;
-(void)setBalloonPluginDataSource:(id)arg1;
-(NSString *)conversationID;
-(BOOL)isiMessage;
-(BOOL)shouldShowChatChrome;
-(BOOL)isPrimaryViewController;
-(void)setIsPrimaryViewController:(BOOL)arg1;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(id)arg1;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id)arg1;
-(void)setIsiMessage:(BOOL)arg1;
-(void)setConversationID:(id)arg1;
-(long long)browserPresentationStyle;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldSuppressEntryView;
-(BOOL)inExpandedPresentation;
-(BOOL)inFullScreenModalPresentation;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(IMBalloonPlugin *)balloonPlugin;
-(BOOL)isDismissing;
-(BOOL)isLoaded;
-(void)dismiss;

@end

