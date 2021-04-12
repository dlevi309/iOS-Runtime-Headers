/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class FBScene, FBSceneSnapshotContext, _FBSSnapshot, IOSurface;

@interface FBSceneSnapshot : NSObject {

	FBScene* _scene;
	FBSceneSnapshotContext* _context;
	_FBSSnapshot* _snapshot;

}

@property (nonatomic,copy,readonly) FBSceneSnapshotContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (nonatomic,readonly) IOSurface * IOSurface; 
@property (nonatomic,readonly) IOSurface * fallbackIOSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
-(FBSceneSnapshotContext *)context;
-(CGImageRef)CGImage;
-(IOSurface *)IOSurface;
-(IOSurface *)fallbackIOSurface;
-(BOOL)hasProtectedContent;
-(BOOL)capture;
-(id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3 ;
-(CGAffineTransform)_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2 ;
-(id)initWithScene:(id)arg1 snapshotContext:(id)arg2 ;
@end

