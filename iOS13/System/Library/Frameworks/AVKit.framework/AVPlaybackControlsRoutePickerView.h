/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVRoutePickerView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class AVButton, NSString;

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem> {

	AVButton* _customButton;
	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;

}

@property (nonatomic,readonly) AVButton * customButton; 
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isIncluded,nonatomic) BOOL included; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                        //@synthesize removed=_removed - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
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
-(AVButton *)customButton;
-(void)updateButtonAppearance;
@end

