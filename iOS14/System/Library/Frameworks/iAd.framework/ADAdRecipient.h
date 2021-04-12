/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

@class ADLayoutOptions, UIView, UIViewController, NSString;


@protocol ADAdRecipient <NSObject,AdAnalyzable>
@property (nonatomic,readonly) int internalAdType; 
@property (nonatomic,retain) ADLayoutOptions * layoutOptions; 
@property (nonatomic,readonly) long long options; 
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,copy) NSString * adResponseId; 
@property (assign,nonatomic) int screenfuls; 
@property (assign,nonatomic) int slotPosition; 
@property (assign,nonatomic) BOOL displayed; 
@property (assign,nonatomic) BOOL reUsed; 
@property (assign,nonatomic) long long lastErrorCode; 
@optional
-(void)setViewSizeInPortrait:(CGSize)arg1 inLandscape:(CGSize)arg2;
-(void)creativeControllerViewWasTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2;

@required
-(long long)lastErrorCode;
-(long long)options;
-(BOOL)reUsed;
-(UIViewController *)presentingViewController;
-(int)screenfuls;
-(void)setDisplayed:(BOOL)arg1;
-(ADLayoutOptions *)layoutOptions;
-(void)setSlotPosition:(int)arg1;
-(BOOL)displayed;
-(void)setScreenfuls:(int)arg1;
-(void)setLayoutOptions:(id)arg1;
-(void)setLastErrorCode:(long long)arg1;
-(int)slotPosition;
-(void)privacyButtonWasTapped;
-(int)internalAdType;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1;
-(void)adlibManagedVideoAdDidImpress;
-(void)adlibManagedVideoAdDidResumePlay;
-(void)adlibManagedVideoAdDidPausePlay;
-(void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
-(void)adlibManagedVideoAdDidTapForMoreInfo;
-(void)adlibManagedVideoAdDidTapVideo;
-(void)adlibManagedVideoAdDidToggleToMute:(BOOL)arg1;
-(UIView *)adSpaceView;
-(NSString *)adResponseId;
-(void)setAdResponseId:(id)arg1;
-(void)setReUsed:(BOOL)arg1;

@end

