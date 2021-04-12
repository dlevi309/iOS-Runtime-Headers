/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSLayoutDimension, NSLayoutAnchor;


@protocol _UIButtonBarLayoutMetricsData <NSObject>
@property (nonatomic,readonly) NSLayoutDimension * verticalSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * minimumSpaceGuide; 
@property (nonatomic,readonly) NSLayoutDimension * flexibleSpaceGuide; 
@property (nonatomic,readonly) NSLayoutAnchor * popoverGuideTopAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * groupSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * groupSpacingGuide; 
@property (nonatomic,readonly) BOOL createsPopoverLayoutGuides; 
@property (nonatomic,readonly) BOOL allowsViewWrappers; 
@required
-(BOOL)createsPopoverLayoutGuides;
-(BOOL)allowsViewWrappers;
-(id)_upcastIfReadOnly;
-(NSLayoutDimension *)verticalSizeGuide;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutAnchor *)popoverGuideTopAnchor;
-(NSLayoutDimension *)groupSizeGuide;
-(NSLayoutDimension *)groupSpacingGuide;

@end

