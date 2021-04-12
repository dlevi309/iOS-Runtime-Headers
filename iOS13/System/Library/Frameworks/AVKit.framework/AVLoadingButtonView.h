/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class AVButton, UIActivityIndicatorView, NSString;

@interface AVLoadingButtonView : UIView <AVPlaybackControlsViewItem> {

	BOOL _removed;
	BOOL _included;
	BOOL _hasFullScreenAppearance;
	BOOL _hasAlternateAppearance;
	BOOL _collapsedOrExcluded;
	BOOL _collapsed;
	BOOL _showsLoadingIndicator;
	AVButton* _button;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                           //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) AVButton * button;                                                  //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                           //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                        //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                      //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded;              //@synthesize collapsedOrExcluded=_collapsedOrExcluded - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(AVButton *)button;
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(BOOL)isRemoved;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(void)_updateIsHiddenAndAlpha;
-(BOOL)showsLoadingIndicator;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
@end

