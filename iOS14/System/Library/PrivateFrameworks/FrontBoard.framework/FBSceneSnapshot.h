/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasProtectedContent;
-(id)initWithScene:(id)arg1 snapshotContext:(id)arg2 ;
-(id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3 ;
-(FBSceneSnapshotContext *)context;
-(BOOL)capture;
-(IOSurface *)fallbackIOSurface;
-(IOSurface *)IOSurface;
-(CGAffineTransform)_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2 ;
-(CGImageRef)CGImage;
@end

