/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_source;
@class PLLibraryServicesManager, NSObject, NSMutableArray;

@interface PLLibraryServicesCPLReadiness : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	NSObject*<OS_dispatch_source> _photoLibraryCPLReadinessTimer;
	NSMutableArray* _photoLibraryCPLReadinessBlocks;

}

@property (readonly) BOOL isReadyForCloudPhotoLibrary; 
-(void)invalidate;
-(id)libraryServicesManager;
-(BOOL)isReadyForCloudPhotoLibrary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
-(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
-(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
-(BOOL)_isAssetsdReadyForCPLManager;
-(void)stopWaitingForCPLReadiness;
-(void)_stopWaitingForCPLReadiness;
-(void)_callOutstandingCPLReadinessBlocks;
-(BOOL)_checkForCPLReadinessAndCallBlocks;
-(void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
@end

