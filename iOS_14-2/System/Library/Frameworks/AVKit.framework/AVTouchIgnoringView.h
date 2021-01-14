/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class AVLayoutItemAttributes, NSString;

@interface AVTouchIgnoringView : UIView <AVPlaybackControlsViewItem> {

	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _collapsedOrExcluded;
	BOOL _collapsed;
	BOOL _removed;
	BOOL _included;
	AVLayoutItemAttributes* _layoutAttributes;
	CGSize _extrinsicContentSize;

}

@property (assign,nonatomic) CGSize extrinsicContentSize;                                          //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
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
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(BOOL)isRemoved;
-(AVLayoutItemAttributes *)layoutAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)extrinsicContentSize;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutAttributesDidChange;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)setIncluded:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(BOOL)hasAlternateAppearance;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(BOOL)hasFullScreenAppearance;
@end

