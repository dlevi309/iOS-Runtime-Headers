/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXProtoMutableFeatureView.h>

@protocol PXProtoFeature;
@class UIImageView, UIView, UIColor, NSString;

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _selected;
	BOOL _disabled;
	BOOL _shouldUpdateContentOnResize;
	id<PXProtoFeature> _feature;
	UIImageView* __removeIconView;
	UIView* _contentView;
	UIEdgeInsets _minimumMargins;

}

@property (nonatomic,readonly) UIImageView * _removeIconView;                       //@synthesize _removeIconView=__removeIconView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double recommendedCompactContentHeight; 
@property (nonatomic,readonly) BOOL wantsContentView; 
@property (nonatomic,readonly) BOOL shouldUpdateContentOnResize;                    //@synthesize shouldUpdateContentOnResize=_shouldUpdateContentOnResize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets minimumMargins;                         //@synthesize minimumMargins=_minimumMargins - In the implementation block
@property (nonatomic,readonly) CGSize regularContentSize; 
@property (nonatomic,readonly) CGSize compactContentSize; 
@property (nonatomic,readonly) id<PXProtoFeature> feature;                          //@synthesize feature=_feature - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                     //@synthesize selected=_selected - In the implementation block
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled;                     //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UIColor * preferredBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(void)updateContent;
-(void)setDisabled:(BOOL)arg1 ;
-(id<PXProtoFeature>)feature;
-(CGSize)intrinsicContentSize;
-(BOOL)isSelected;
-(void)_invalidateContent;
-(void)_updateIfNeeded;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(UIEdgeInsets)minimumMargins;
-(CGSize)regularContentSize;
-(CGSize)compactContentSize;
-(void)layoutSubviews;
-(CGRect)_contentViewFrame;
-(BOOL)_needsUpdate;
-(double)recommendedCompactContentHeight;
-(UIColor *)preferredBackgroundColor;
-(BOOL)wantsContentView;
-(void)_updateContentIfNeeded;
-(UIImageView *)_removeIconView;
-(BOOL)shouldUpdateContentOnResize;
-(UIEdgeInsets)_contentInsets;
-(void)_setNeedsUpdate;
-(UIView *)contentView;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setFeature:(id<PXProtoFeature>)arg1 ;
@end

