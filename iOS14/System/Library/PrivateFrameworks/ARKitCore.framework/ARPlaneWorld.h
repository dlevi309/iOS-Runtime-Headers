/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol OS_dispatch_semaphore;
#import <ARKitCore/ARKitCore-Structs.h>
@class ARGPUWarper, NSObject;

@interface ARPlaneWorld : NSObject {

	map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >* _planes;
	ARGPUWarper* _gpuWarper;
	ARPlaneUpdateQueue* _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	unsigned long long _textureSize;

}
+(map<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > >, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > > > >*)findMergedPlanes:(const map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >*)arg1 :(const map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >*)arg2 ;
-(BOOL)isBusy;
-(id)init;
-(vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >*)planes;
-(id)_fullDescription;
-(void)updatePlanes:(const map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >*)arg1 withCameraImage:(CVBufferRef)arg2 exposureOffset:(float)arg3 transform:(SCD_Struct_AR1)arg4 intrinsics:(SCD_Struct_AR25)arg5 synchronous:(BOOL)arg6 ;
-(id)initWithTextureSize:(unsigned long long)arg1 ;
-(map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >*)updatePlanes:(const map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >*)arg1 withCurrentDetections:(const map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > >*)arg2 synchronous:(BOOL)arg3 ;
@end
