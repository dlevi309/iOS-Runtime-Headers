/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_source;
@class PLLibraryServicesManager, NSObject, NSMutableArray;

@interface PLLibraryServicesCPLReadiness : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	NSObject*<OS_dispatch_source> _photoLibraryCPLReadinessTimer;
	NSMutableArray* _photoLibraryCPLReadinessBlocks;

}
-(id)libraryServicesManager;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)_callOutstandingCPLReadinessBlocks;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
-(void)cancelCPLReadinessBlocksAndStopWaiting;
-(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
-(void)invalidate;
-(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
-(BOOL)isReadyForCloudPhotoLibraryWithStatus:(id*)arg1 ;
-(void)_stopWaitingForCPLReadiness;
-(BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id*)arg1 ;
-(BOOL)_checkForCPLReadinessAndCallBlocks;
@end

