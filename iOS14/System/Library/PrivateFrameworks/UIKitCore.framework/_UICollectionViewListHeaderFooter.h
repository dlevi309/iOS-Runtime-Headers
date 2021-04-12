/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol UITableConstants;
@class _UISystemBackgroundView, UIView, _UIBackgroundViewConfiguration;

@interface _UICollectionViewListHeaderFooter : UICollectionReusableView {

	struct {
		unsigned style : 3;
		unsigned needsConfigurationStateUpdate : 1;
		unsigned hasCustomBackgroundColor : 1;
		unsigned hasCustomBackgroundViewConfigurationProvider : 1;
		unsigned hasCustomBackgroundViewConfiguration : 1;
		unsigned automaticallyUpdatesBackgroundViewConfiguration : 1;
		unsigned automaticallyUpdatesContentViewConfiguration : 1;
	}  _headerFooterFlags;
	Class _contentViewConfigurationClass;
	/*^block*/id _contentViewConfigurationProvider;
	_UISystemBackgroundView* _systemBackgroundView;
	/*^block*/id _backgroundViewConfigurationProvider;
	UIView* _contentView;
	id<UITableConstants> _constants;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * contentView;                                                                                                                                                                   //@synthesize contentView=_contentView - In the implementation block
@property (getter=_contentViewInsets,nonatomic,readonly) UIEdgeInsets contentViewInsets;                                                                                                                             //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants;                                                                                                                                     //@synthesize constants=_constants - In the implementation block
@property (setter=_setContentViewConfiguration:,getter=_contentViewConfiguration,nonatomic,copy) id<_UIContentViewConfiguration> _contentViewConfiguration; 
@property (assign,setter=_setAutomaticallyUpdatesContentViewConfiguration:,getter=_automaticallyUpdatesContentViewConfiguration,nonatomic) BOOL _automaticallyUpdatesContentViewConfiguration; 
@property (setter=_setContentViewConfigurationProvider:,getter=_contentViewConfigurationProvider,nonatomic,copy) id _contentViewConfigurationProvider; 
@property (setter=_setBackgroundViewConfiguration:,getter=_backgroundViewConfiguration,nonatomic,copy) _UIBackgroundViewConfiguration * _backgroundViewConfiguration; 
@property (assign,setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:,getter=_automaticallyUpdatesBackgroundViewConfiguration,nonatomic) BOOL _automaticallyUpdatesBackgroundViewConfiguration; 
@property (setter=_setBackgroundViewConfigurationProvider:,getter=_backgroundViewConfigurationProvider,nonatomic,copy) id _backgroundViewConfigurationProvider; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
+(Class)_contentViewClass;
-(CGSize)_contentTargetSizeForTargetSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 forUseWithSizeThatFits:(BOOL)arg4 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)_constants;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)_setAutomaticallyUpdatesContentViewConfiguration:(BOOL)arg1 ;
-(void)_setAutomaticallyUpdatesBackgroundViewConfiguration:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_automaticallyUpdatesBackgroundViewConfiguration;
-(void)_layoutContentView;
-(void)_resetBackgroundColor;
-(void)_applyBackgroundViewConfiguration:(id)arg1 ;
-(/*^block*/id)_defaultBackgroundViewConfigurationProvider;
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)_automaticallyUpdatesContentViewConfiguration;
-(void)_updateBackgroundViewConfigurationForState:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)_contentViewInsets;
-(void)_updateConstants;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateDefaultBackgroundAppearance;
-(long long)_styleFromLayoutAttributes:(id)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_setContentViewConfiguration:(id)arg1 ;
-(id<_UIContentViewConfiguration>)_contentViewConfiguration;
-(void)_setNeedsConfigurationStateUpdate;
-(id)_backgroundViewConfigurationProvider;
-(void)_performConfigurationStateUpdate;
-(void)_setBackgroundViewConfigurationProvider:(/*^block*/id)arg1 ;
-(void)_setBackgroundViewConfiguration:(id)arg1 ;
-(void)_updateContentViewConfigurationForState:(unsigned long long)arg1 ;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)_layoutSystemBackgroundView;
-(void)_resetBackgroundViewConfiguration;
-(void)_setContentViewConfigurationProvider:(/*^block*/id)arg1 ;
-(id)_contentViewConfigurationProvider;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(_UIBackgroundViewConfiguration *)_backgroundViewConfiguration;
@end

