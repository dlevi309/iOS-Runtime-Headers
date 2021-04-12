/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLock;

@interface PLThumbnailCascadingDownscaleContext : NSObject {

	NSLock* _lock;
	FigCascadeContextRef _portraitContext;
	FigCascadeContextRef _landscapeContext;

}
-(id)init;
-(void)dealloc;
-(void)discardContexts;
-(BOOL)downscaleImageSurface:(IOSurfaceRef)arg1 destinationCount:(int)arg2 sizes:(SCD_Struct_PL27*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7 ;
@end

