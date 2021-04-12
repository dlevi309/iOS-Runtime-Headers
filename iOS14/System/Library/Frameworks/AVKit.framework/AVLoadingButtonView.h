/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class AVLayoutItemAttributes, AVButton, UIActivityIndicatorView, NSString;

@interface AVLoadingButtonView : UIView <AVPlaybackControlsViewItem> {

	BOOL _removed;
	BOOL _included;
	BOOL _hasFullScreenAppearance;
	BOOL _hasAlternateAppearance;
	BOOL _collapsedOrExcluded;
	BOOL _collapsed;
	BOOL _showsLoadingIndicator;
	AVLayoutItemAttributes* _layoutAttributes;
	AVButton* _button;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                           //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) AVButton * button;                                                  //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                           //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                        //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                      //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded;              //@synthesize collapsedOrExcluded=_collapsedOrExcluded - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                          //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(AVButton *)button;
-(BOOL)isRemoved;
-(CGSize)intrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(CGSize)extrinsicContentSize;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(void)layoutAttributesDidChange;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)layoutSubviews;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)hasAlternateAppearance;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(BOOL)hasFullScreenAppearance;
@end

