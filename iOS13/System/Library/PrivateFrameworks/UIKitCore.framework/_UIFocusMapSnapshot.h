/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusRegionSearchContext.h>

@protocol _UIFocusRegionContainer, _UIFocusMapArea;
@class UIFocusSystem, UIScreen, _UIFocusSearchInfo, NSMutableArray, NSHashTable, NSArray, _UIFocusRegion, _UIFocusMapSnapshotDebugInfo, NSString;

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {

	NSMutableArray* _mutableUnoccludedRegions;
	NSHashTable* _filteredOriginalRegions;
	BOOL _didCaptureSnapshot;
	NSMutableArray* _containersBeingAdded;
	NSMutableArray* _containersBeingAddedFocusSystems;
	NSHashTable* _eligibleEnvironments;
	NSHashTable* _ineligibleEnvironments;
	BOOL _isSearchingRegionsOfInterestContainer;
	BOOL _clipToSnapshotRect;
	NSArray* _regions;
	UIFocusSystem* _focusSystem;
	id<_UIFocusRegionContainer> _rootContainer;
	id<_UIFocusMapArea> _mapArea;
	_UIFocusRegion* _focusedRegion;
	id<_UIFocusRegionContainer> _regionsContainer;
	_UIFocusSearchInfo* _searchInfo;
	id<_UIFocusMapArea> _searchArea;

}

@property (getter=_debugInfo,nonatomic,readonly) _UIFocusMapSnapshotDebugInfo * debugInfo; 
@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                                           //@synthesize searchInfo=_searchInfo - In the implementation block
@property (getter=_searchArea,nonatomic,readonly) id<_UIFocusMapArea> searchArea;                       //@synthesize searchArea=_searchArea - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                                      //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIFocusRegionContainer> rootContainer;                        //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,readonly) id<_UIFocusMapArea> mapArea;                                             //@synthesize mapArea=_mapArea - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusRegion * focusedRegion;                                     //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIFocusRegionContainer> regionsContainer;                     //@synthesize regionsContainer=_regionsContainer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions; 
@property (nonatomic,copy,readonly) NSArray * originalRegions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
-(id)init;
-(UIScreen *)screen;
-(id)debugQuickLookObject;
-(id<_UIFocusMapArea>)searchArea;
-(id<UICoordinateSpace>)coordinateSpace;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(void)addRegion:(id)arg1 ;
-(void)addRegionsInContainer:(id)arg1 ;
-(_UIFocusRegion *)focusedRegion;
-(NSArray *)regions;
-(id<_UIFocusMapArea>)mapArea;
-(id)_searchArea;
-(id)_debugInfo;
-(id)_debugInfoWithFocusMapSearchInfo:(id)arg1 ;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(NSArray *)originalRegions;
-(id<_UIFocusRegionContainer>)rootContainer;
-(id)regionsForOriginalRegion:(id)arg1 ;
-(id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3 ;
-(id<_UIFocusRegionContainer>)regionsContainer;
-(void)_capture;
-(void)addRegions:(id)arg1 ;
-(void)addRegionsInContainers:(id)arg1 ;
-(id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 ;
@end

