/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIColor;

@interface PXRoundedCornerOverlayView : UIImageView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _continuousCorners;
	double _cornerRadius;
	unsigned long long _cornersToRound;
	UIColor* _overlayColor;
	double _displayScale;

}

@property (nonatomic,readonly) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long cornersToRound;              //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (nonatomic,readonly) BOOL continuousCorners;                         //@synthesize continuousCorners=_continuousCorners - In the implementation block
@property (nonatomic,readonly) UIColor * overlayColor;                         //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,readonly) double displayScale;                            //@synthesize displayScale=_displayScale - In the implementation block
-(void)_invalidateImage;
-(void)setDisplayScale:(double)arg1 ;
-(double)displayScale;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateIfNeeded;
-(double)cornerRadius;
-(void)_updateImageIfNeeded;
-(BOOL)continuousCorners;
-(BOOL)_needsUpdate;
-(unsigned long long)cornersToRound;
-(id)mutableChangeObject;
-(void)_setNeedsUpdate;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)overlayColor;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(void)setCornersToRound:(unsigned long long)arg1 ;
@end

