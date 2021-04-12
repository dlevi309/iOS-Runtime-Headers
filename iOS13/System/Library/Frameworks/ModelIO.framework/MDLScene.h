/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


#import <ModelIO/ModelIO-Structs.h>
@class NSMutableArray, NSArray;

@interface MDLScene : NSObject {

	mutex* _sceneMutex;
	vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> >* _sceneObjects;
	vector<MDLLight *, std::__1::allocator<MDLLight *> >* _sceneLights;
	NSMutableArray* _objects;
	int _signature;

}

@property (nonatomic,retain,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)clear;
-(NSArray *)objects;
-(id)raytraceSceneWithCamera:(const RTCamera*)arg1 reflection:(id)arg2 irradiance:(id)arg3 ;
-(int)acquireLockGuard;
-(void)releaseLockGuard:(int)arg1 ;
-(5)hitTestRayFrom:(id)arg1 ;
-(BOOL)castRayFrom:(RTCamera*)arg1 withDirection:(RTIntersectionResult*)arg2 ;
@end

