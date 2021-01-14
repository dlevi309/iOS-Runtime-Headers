/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)borderColor;
+(double)borderWidth;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK3)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isMotionEnabled;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)invalidate;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 rendererState:(id)arg3 ;
-(BOOL)isPaused;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 rendererState:(id)arg3 fetchInitialContentSynchronously:(BOOL)arg4 ;
-(void)_updateMagnitudesWithStyle:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateContentIfPossible;
-(id)rendererState;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)setContentSuppressed:(BOOL)arg1 ;
-(BOOL)isContentSuppressed;
@end

