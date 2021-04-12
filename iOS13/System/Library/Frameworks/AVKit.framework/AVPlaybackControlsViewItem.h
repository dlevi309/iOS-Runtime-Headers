/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPlaybackControlsViewItem <NSObject>
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isIncluded,nonatomic) BOOL included; 
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance; 
@property (assign,nonatomic) BOOL hasFullScreenAppearance; 
@required
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1;
-(void)setExtrinsicContentSize:(CGSize)arg1;
-(CGSize)extrinsicContentSize;
-(BOOL)isRemoved;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1;
-(void)setRemoved:(BOOL)arg1;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1;

@end

