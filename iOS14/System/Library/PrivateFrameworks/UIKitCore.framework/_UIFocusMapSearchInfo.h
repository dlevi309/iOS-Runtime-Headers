/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)destinationRegions;
-(_UIFocusSearchInfo *)searchInfo;
-(void)addSnapshot:(id)arg1 ;
-(void)addDestinationRegion:(id)arg1 ;
-(void)setDidFindFocusBlockingBoundary:(BOOL)arg1 ;
-(void)setFocusGroupMap:(_UIFocusGroupMap *)arg1 ;
-(void)setLinearSortedFocusItems:(NSArray *)arg1 ;
-(NSMutableArray *)mutableSnapshots;
-(NSMutableArray *)mutableDestinationRegions;
-(BOOL)didFindFocusBlockingBoundary;
-(void)setMutableSnapshots:(NSMutableArray *)arg1 ;
-(void)setMutableDestinationRegions:(NSMutableArray *)arg1 ;
-(_UIFocusGroupMap *)focusGroupMap;
-(NSArray *)linearSortedFocusItems;
-(NSArray *)snapshots;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
@end

