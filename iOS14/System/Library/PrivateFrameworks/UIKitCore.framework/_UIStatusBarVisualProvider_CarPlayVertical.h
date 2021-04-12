/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_CarPlay.h>

@class NSDictionary;

@interface _UIStatusBarVisualProvider_CarPlayVertical : _UIStatusBarVisualProvider_CarPlay {

	NSDictionary* _orderedDisplayItemPlacements;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;              //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(NSDictionary *)orderedDisplayItemPlacements;
@end

