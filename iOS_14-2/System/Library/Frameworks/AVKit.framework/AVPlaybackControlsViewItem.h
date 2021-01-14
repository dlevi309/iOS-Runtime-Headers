/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPlaybackControlsViewItem <AVLayoutViewItem>
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isIncluded,nonatomic) BOOL included; 
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance; 
@property (assign,nonatomic) BOOL hasFullScreenAppearance; 
@required
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1;
-(void)setHasFullScreenAppearance:(BOOL)arg1;
-(BOOL)isRemoved;
-(CGSize)extrinsicContentSize;
-(BOOL)isIncluded;
-(void)setHasAlternateAppearance:(BOOL)arg1;
-(void)setIncluded:(BOOL)arg1;
-(BOOL)hasAlternateAppearance;
-(void)setExtrinsicContentSize:(CGSize)arg1;
-(void)setCollapsed:(BOOL)arg1;
-(BOOL)isCollapsedOrExcluded;
-(BOOL)hasFullScreenAppearance;

@end

