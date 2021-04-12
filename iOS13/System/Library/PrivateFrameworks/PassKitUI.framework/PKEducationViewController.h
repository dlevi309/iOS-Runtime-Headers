/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKFieldDetectSuppressor.h>

@class UIImageView, UIView, UILabel, PKPaymentHeroImageController, PKPaymentSetupHeroView, PKPaymentSetupInitialCardEducationIconsView, PKMobileAssetManager, PKPaymentPass, AVPlayerLayer, AVPlayer, AVPlayerItem, NSString;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor> {

	UIImageView* _heroPhone;
	UIView* _heroPhoneBackground;
	UIImageView* _passSnapshot;
	UILabel* _instructionLabel;
	PKPaymentHeroImageController* _heroImageController;
	PKPaymentSetupHeroView* _heroView;
	PKPaymentSetupInitialCardEducationIconsView* _iconsView;
	PKMobileAssetManager* _mobileAssetManager;
	PKPaymentPass* _paymentPass;
	unsigned long long _educationContext;
	BOOL _isFaceIDDevice;
	BOOL _isPad;
	double _maxHeight;
	AVPlayerLayer* _video;
	UIView* _videoBoundingView;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	BOOL _playerStarted;
	BOOL _invalidated;
	BOOL _offerAddToWatch;
	/*^block*/id _continueHandler;
	NSString* _titleOverride;
	NSString* _bodyAddition;

}

@property (nonatomic,copy) id continueHandler;                        //@synthesize continueHandler=_continueHandler - In the implementation block
@property (assign,nonatomic) BOOL offerAddToWatch;                    //@synthesize offerAddToWatch=_offerAddToWatch - In the implementation block
@property (nonatomic,copy) NSString * titleOverride;                  //@synthesize titleOverride=_titleOverride - In the implementation block
@property (nonatomic,copy) NSString * bodyAddition;                   //@synthesize bodyAddition=_bodyAddition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
+(id)assetBackgroundColorPad;
+(id)assetBackgroundColor;
+(BOOL)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3 ;
-(void)startPlayingVideo;
-(void)_performAddToWatchFlow;
-(void)performContinue;
-(void)didFinishPlaying;
-(void)_removePlayerItem;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(BOOL)offerAddToWatch;
-(void)setOfferAddToWatch:(BOOL)arg1 ;
-(NSString *)titleOverride;
-(void)setTitleOverride:(NSString *)arg1 ;
-(NSString *)bodyAddition;
-(void)setBodyAddition:(NSString *)arg1 ;
@end

