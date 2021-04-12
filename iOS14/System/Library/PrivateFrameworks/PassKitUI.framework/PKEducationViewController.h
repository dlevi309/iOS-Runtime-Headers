/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKFieldDetectSuppressor.h>

@class PKPaymentHeroImageController, UIImageView, UIView, PKPaymentPass, PKEducationPhone, NSString;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor> {

	PKPaymentHeroImageController* _heroImageController;
	UIImageView* _heroPadImageView;
	UIView* _heroPadBackground;
	PKPaymentPass* _paymentPass;
	unsigned long long _educationContext;
	PKEducationPhone* _educationBodyView;
	BOOL _isFaceIDDevice;
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
+(BOOL)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2 ;
+(id)assetBackgroundColor;
+(id)assetBackgroundColorPad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)init;
-(BOOL)_canShowWhileLocked;
-(void)invalidate;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3 ;
-(id)_heroPadImage;
-(void)_performAddToWatchFlow;
-(void)performContinue;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(id)continueHandler;
-(BOOL)suppressFieldDetect;
-(void)setContinueHandler:(id)arg1 ;
-(BOOL)offerAddToWatch;
-(void)setOfferAddToWatch:(BOOL)arg1 ;
-(NSString *)titleOverride;
-(void)setTitleOverride:(NSString *)arg1 ;
-(NSString *)bodyAddition;
-(void)setBodyAddition:(NSString *)arg1 ;
-(void)dealloc;
@end

