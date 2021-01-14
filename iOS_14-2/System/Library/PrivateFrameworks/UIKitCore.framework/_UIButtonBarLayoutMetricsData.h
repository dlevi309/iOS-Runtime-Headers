/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutDimension *)verticalSizeGuide;
-(NSLayoutDimension *)groupSizeGuide;
-(NSLayoutDimension *)groupSpacingGuide;
-(NSLayoutDimension *)minimumSpaceGuide;
-(id)_upcastIfReadOnly;
-(BOOL)allowsViewWrappers;
-(NSLayoutAnchor *)popoverGuideTopAnchor;
-(BOOL)createsPopoverLayoutGuides;

@end

