/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIFocusSystem, UIScreen, _UIFocusSearchInfo;


@protocol _UIFocusRegionSearchContext <NSObject>
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem; 
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) id<_UIFocusMapArea> searchArea; 
@property (nonatomic,readonly) _UIFocusSearchInfo * searchInfo; 
@required
-(UIFocusSystem *)focusSystem;
-(void)addRegion:(id)arg1;
-(id<UICoordinateSpace>)coordinateSpace;
-(id<_UIFocusMapArea>)searchArea;
-(_UIFocusSearchInfo *)searchInfo;
-(void)addRegionsInContainers:(id)arg1;
-(UIScreen *)screen;
-(void)addRegionsInContainer:(id)arg1;
-(void)addRegions:(id)arg1;

@end

