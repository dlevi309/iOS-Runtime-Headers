/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIScreen *)screen;
-(id<_UIFocusMapArea>)searchArea;
-(id<UICoordinateSpace>)coordinateSpace;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(void)addRegion:(id)arg1;
-(void)addRegionsInContainer:(id)arg1;
-(void)addRegions:(id)arg1;
-(void)addRegionsInContainers:(id)arg1;

@end

