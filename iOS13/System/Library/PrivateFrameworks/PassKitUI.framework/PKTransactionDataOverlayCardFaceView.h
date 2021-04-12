/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@class PKPass, UIImageView, PKCategoryVisualizationCardView, PKPaymentService, NSString;

@interface PKTransactionDataOverlayCardFaceView : UIView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver> {

	PKPass* _pass;
	UIImageView* _maskView;
	PKCategoryVisualizationCardView* _overlayView;
	PKPaymentService* _paymentService;
	BOOL _invalidated;
	BOOL _foregroundActive;
	int _unlockNotifyToken;
	BOOL _contentSuppressed;

}

@property (assign,getter=isContentSuppressed,nonatomic) BOOL contentSuppressed;              //@synthesize contentSuppressed=_contentSuppressed - In the implementation block
@property (assign,getter=isMotionEnabled,nonatomic) BOOL motionEnabled; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)borderWidth;
+(id)borderColor;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK1)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2 ;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 rendererState:(id)arg3 ;
-(void)_updateMagnitudesWithStyle:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateContentIfPossible;
-(BOOL)isMotionEnabled;
-(id)rendererState;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)setContentSuppressed:(BOOL)arg1 ;
-(BOOL)isContentSuppressed;
@end

