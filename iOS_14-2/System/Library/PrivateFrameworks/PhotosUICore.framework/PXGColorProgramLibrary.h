/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol MTLDevice;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSMutableSet;

@interface PXGColorProgramLibrary : NSObject {

	NSMutableArray* _programs;
	NSMutableSet* _failedColorspaces;
	os_unfair_lock_s _lock;
	id<MTLDevice> _device;
	CGColorSpaceRef _destinationColorSpace;

}

@property (nonatomic,readonly) id<MTLDevice> device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef destinationColorSpace;              //@synthesize destinationColorSpace=_destinationColorSpace - In the implementation block
-(id)init;
-(CGColorSpaceRef)destinationColorSpace;
-(id)colorProgramForSourceColorSpace:(CGColorSpaceRef)arg1 flags:(unsigned long long)arg2 ;
-(id<MTLDevice>)device;
-(id)description;
-(id)initWithDevice:(id)arg1 destinationColorSpace:(CGColorSpaceRef)arg2 ;
-(void)dealloc;
@end

