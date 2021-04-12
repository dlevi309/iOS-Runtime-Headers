/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdDiagnosticsServiceProtocol.h>

@class NSString;

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)dumpPhotoAnalysisStatusWithReply:(/*^block*/id)arg1 ;
-(void)incompleteRestoreProcessesWithReply:(/*^block*/id)arg1 ;
-(void)getPhotosXPCEndpointWithReply:(/*^block*/id)arg1 ;
-(void)setPhotosXPCEndpoint:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg1 ;
@end

