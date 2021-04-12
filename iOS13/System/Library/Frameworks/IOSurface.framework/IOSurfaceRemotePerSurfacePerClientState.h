/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
*/


#import <IOSurface/IOSurface-Structs.h>
@class IOSurfaceRemotePerSurfaceGlobalState;

@interface IOSurfaceRemotePerSurfacePerClientState : NSObject {

	IOSurfaceClientRef _surface;
	unsigned _refcount;
	IOSurfaceRemotePerSurfaceGlobalState* _globalState;

}

@property (nonatomic,retain) IOSurfaceRemotePerSurfaceGlobalState * globalState;              //@synthesize globalState=_globalState - In the implementation block
@property (nonatomic,readonly) IOSurfaceClientRef surface; 
@property (nonatomic,readonly) unsigned debugRefCount; 
-(void)dealloc;
-(IOSurfaceClientRef)surface;
-(id)mergeExtraData:(id)arg1 ;
-(void)setGlobalState:(IOSurfaceRemotePerSurfaceGlobalState *)arg1 ;
-(IOSurfaceRemotePerSurfaceGlobalState *)globalState;
-(BOOL)removeClientReferenceToSurface;
-(id)initWithSurface:(IOSurfaceClientRef)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4 ;
-(unsigned)debugRefCount;
-(void)addClientReferenceToSurfaceWithExtraData:(id)arg1 ;
@end

