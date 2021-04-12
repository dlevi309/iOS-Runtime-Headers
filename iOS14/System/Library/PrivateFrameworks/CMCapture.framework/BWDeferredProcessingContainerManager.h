/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWDeferredContainerManagerBase.h>

@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {

	OpaqueFigCaptureDeferredContainerManagerRef _xpcContainerManager;

}
+(id)sharedInstance;
-(id)init;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(void)_setXPCContainerManager:(OpaqueFigCaptureDeferredContainerManagerRef)arg1 ;
-(OpaqueFigCaptureDeferredContainerManagerRef)_copyXPCContainerManager;
-(int)waitForShaderCompilation;
-(int)_queryContainerStatus:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int*)arg3 ;
-(id)_copyRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 err:(int*)arg4 ;
-(int)_releaseRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(id)createProcessingContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
-(void)releaseProcessingContainer:(id)arg1 ;
@end

