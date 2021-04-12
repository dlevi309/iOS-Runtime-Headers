/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, _UIFocusGroupMap, NSMutableArray, _UIFocusSearchInfo;

@interface _UIFocusMapSearchInfo : NSObject {

	BOOL _didFindFocusBlockingBoundary;
	NSArray* _linearSortedFocusItems;
	_UIFocusGroupMap* _focusGroupMap;
	NSMutableArray* _mutableSnapshots;
	NSMutableArray* _mutableDestinationRegions;
	_UIFocusSearchInfo* _searchInfo;

}

@property (nonatomic,retain) NSMutableArray * mutableSnapshots;                       //@synthesize mutableSnapshots=_mutableSnapshots - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDestinationRegions;              //@synthesize mutableDestinationRegions=_mutableDestinationRegions - In the implementation block
@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                         //@synthesize searchInfo=_searchInfo - In the implementation block
@property (assign,nonatomic) BOOL didFindFocusBlockingBoundary;                       //@synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary - In the implementation block
@property (nonatomic,retain) NSArray * linearSortedFocusItems;                        //@synthesize linearSortedFocusItems=_linearSortedFocusItems - In the implementation block
@property (nonatomic,retain) _UIFocusGroupMap * focusGroupMap;                        //@synthesize focusGroupMap=_focusGroupMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapshots; 
@property (nonatomic,copy,readonly) NSArray * destinationRegions; 
-(id)init;
-(_UIFocusSearchInfo *)searchInfo;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(NSArray *)linearSortedFocusItems;
-(_UIFocusGroupMap *)focusGroupMap;
-(NSArray *)destinationRegions;
-(void)addSnapshot:(id)arg1 ;
-(void)addDestinationRegion:(id)arg1 ;
-(void)setDidFindFocusBlockingBoundary:(BOOL)arg1 ;
-(void)setLinearSortedFocusItems:(NSArray *)arg1 ;
-(void)setFocusGroupMap:(_UIFocusGroupMap *)arg1 ;
-(NSMutableArray *)mutableSnapshots;
-(NSMutableArray *)mutableDestinationRegions;
-(NSArray *)snapshots;
-(BOOL)didFindFocusBlockingBoundary;
-(void)setMutableSnapshots:(NSMutableArray *)arg1 ;
-(void)setMutableDestinationRegions:(NSMutableArray *)arg1 ;
@end

