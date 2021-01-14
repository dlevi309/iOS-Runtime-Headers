/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXUpdater, PXRoundProgressView, PXGAssetDecorationViewConfiguration;

@interface PXGAssetDecorationView : UIView <PXGReusableView> {

	PXUpdater* _updater;
	PXRoundProgressView* _progressIndicatorView;
	PXGAssetDecorationViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXGAssetDecorationViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                       //@synthesize clippingRect=_clippingRect - In the implementation block
+(BOOL)wantsDecorationViewForConfiguration:(id)arg1 ;
+(BOOL)_wantsProgressIndicatorForConfiguration:(id)arg1 ;
-(void)becomeReusable;
-(id)initWithFrame:(CGRect)arg1 ;
-(PXGAssetDecorationViewConfiguration *)userData;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setClippingRect:(CGRect)arg1 ;
-(CGRect)clippingRect;
-(void)setUserData:(PXGAssetDecorationViewConfiguration *)arg1 ;
-(void)_setNeedsUpdate;
-(void)_invalidateProgressIndicator;
-(void)_updateProgressIndicator;
@end

