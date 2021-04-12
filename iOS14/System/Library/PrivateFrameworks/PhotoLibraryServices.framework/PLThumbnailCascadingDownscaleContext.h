/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLock, PLThumbnailContextCleanupTimer;

@interface PLThumbnailCascadingDownscaleContext : NSObject {

	NSLock* _lock;
	FigCascadeContextRef _portraitContext;
	FigCascadeContextRef _landscapeContext;
	PLThumbnailContextCleanupTimer* _idleCleanupTimer;

}
-(void)discardContexts;
-(id)init;
-(BOOL)downscaleImageSurface:(IOSurfaceRef)arg1 destinationCount:(int)arg2 sizes:(SCD_Struct_PL29*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7 ;
-(void)_cleanupTimerFired;
-(void)dealloc;
@end

