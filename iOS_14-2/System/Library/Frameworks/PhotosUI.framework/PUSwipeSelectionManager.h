/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableDictionary, PXUIAutoScroller, NSIndexPath, PUPhotoSelectionManager;

@interface PUSwipeSelectionManager : NSObject {

	NSMutableDictionary* _oldIndexesPaths;
	id<PUSwipeSelectionManagerDelegate> _delegate;
	id<PUSwipeSelectionManagerDataSource> _datasource;
	PXUIAutoScroller* _selectionAutoScroller;
	long long __selectionMode;
	NSIndexPath* __startingIndexPath;
	PUPhotoSelectionManager* __restorePhotoSelectionManager;
	id __pausingChangesToken;
	CGPoint _screenTouchLocation;

}

@property (assign,setter=_setSelectionMode:,nonatomic) long long _selectionMode;                                                            //@synthesize _selectionMode=__selectionMode - In the implementation block
@property (setter=_setStartingIndexPath:,nonatomic,copy) NSIndexPath * _startingIndexPath;                                                  //@synthesize _startingIndexPath=__startingIndexPath - In the implementation block
@property (setter=_setRestorePhotoSelectionManager:,nonatomic,retain) PUPhotoSelectionManager * _restorePhotoSelectionManager;              //@synthesize _restorePhotoSelectionManager=__restorePhotoSelectionManager - In the implementation block
@property (setter=_setPausingChangesToken:,nonatomic,retain) id _pausingChangesToken;                                                       //@synthesize _pausingChangesToken=__pausingChangesToken - In the implementation block
@property (assign,nonatomic,__weak) id<PUSwipeSelectionManagerDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUSwipeSelectionManagerDataSource> datasource;                                                       //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) PXUIAutoScroller * selectionAutoScroller;                                                                      //@synthesize selectionAutoScroller=_selectionAutoScroller - In the implementation block
@property (assign,nonatomic) CGPoint screenTouchLocation;                                                                                   //@synthesize screenTouchLocation=_screenTouchLocation - In the implementation block
-(long long)_selectionMode;
-(id)init;
-(id<PUSwipeSelectionManagerDelegate>)delegate;
-(id<PUSwipeSelectionManagerDataSource>)datasource;
-(CGPoint)screenTouchLocation;
-(id)_indexesPathsRangeForIndexPath:(id)arg1 ;
-(long long)_selectionModeForRestoringStateOfIndexPath:(id)arg1 ;
-(void)_setSelectionMode:(long long)arg1 ;
-(PUPhotoSelectionManager *)_restorePhotoSelectionManager;
-(void)_setRestorePhotoSelectionManager:(id)arg1 ;
-(void)endSelection;
-(void)setDelegate:(id<PUSwipeSelectionManagerDelegate>)arg1 ;
-(void)setDatasource:(id<PUSwipeSelectionManagerDataSource>)arg1 ;
-(id)_pausingChangesToken;
-(void)_setPausingChangesToken:(id)arg1 ;
-(NSIndexPath *)_startingIndexPath;
-(PXUIAutoScroller *)selectionAutoScroller;
-(void)setScreenTouchLocation:(CGPoint)arg1 ;
-(void)setSelectionAutoScroller:(PXUIAutoScroller *)arg1 ;
-(void)updateSelectionWithCurrentIndexPath:(id)arg1 leftClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3 ;
-(void)beginSelectionFromIndexPath:(id)arg1 ;
-(id)initWithSelectionMode:(long long)arg1 photoSelectionManager:(id)arg2 ;
-(void)dealloc;
-(void)_setStartingIndexPath:(id)arg1 ;
@end

