/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableSet, NSMutableDictionary;

@interface PLCloudPhotoLibraryUploadTracker : NSObject {

	unsigned long long _totalNumberOfUnpushedMasters;
	unsigned long long _totalNumberOfPushedMasters;
	unsigned long long _totalNumberOfUploadedMasters;
	unsigned long long _totalSizeOfUnpushedOriginals;
	unsigned long long _totalSizeOfPushedOriginals;
	unsigned long long _totalUploadedOriginalSize;
	NSMutableSet* _mastersToUpload;
	NSMutableDictionary* _trackedResourceProgressSize;
	NSMutableDictionary* _trackedResourceMasterUploaded;

}

@property (assign) unsigned long long totalNumberOfUnpushedMasters;              //@synthesize totalNumberOfUnpushedMasters=_totalNumberOfUnpushedMasters - In the implementation block
@property (assign) unsigned long long totalNumberOfUploadedMasters;              //@synthesize totalNumberOfUploadedMasters=_totalNumberOfUploadedMasters - In the implementation block
@property (assign) unsigned long long totalSizeOfUnpushedOriginals;              //@synthesize totalSizeOfUnpushedOriginals=_totalSizeOfUnpushedOriginals - In the implementation block
@property (assign) unsigned long long totalUploadedOriginalSize;                 //@synthesize totalUploadedOriginalSize=_totalUploadedOriginalSize - In the implementation block
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)stopTrackingResourceWithScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3 ;
-(void)stopTrackingScopedIdentifier:(id)arg1 ;
-(void)addSizeForUnpushedOriginals:(unsigned long long)arg1 forScopedIdentifier:(id)arg2 ;
-(unsigned long long)totalNumberOfUnpushedMasters;
-(unsigned long long)totalNumberOfUploadedMasters;
-(unsigned long long)totalSizeOfUnpushedOriginals;
-(unsigned long long)totalUploadedOriginalSize;
-(void)updateForScopedIdentifier:(id)arg1 progress:(float)arg2 fileSize:(unsigned long long)arg3 type:(int)arg4 ;
-(void)resetIfNeeded;
-(void)uploadFinishedForScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3 withError:(BOOL)arg4 ;
-(void)setupFromLibrary:(id)arg1 ;
-(void)setupFromCPLManager:(id)arg1 ;
-(id)_constructKeyForScopedIdentifier:(id)arg1 type:(int)arg2 ;
-(BOOL)trackingScopedIdentifier:(id)arg1 ;
-(void)setTotalNumberOfUnpushedMasters:(unsigned long long)arg1 ;
-(void)setTotalNumberOfUploadedMasters:(unsigned long long)arg1 ;
-(void)setTotalSizeOfUnpushedOriginals:(unsigned long long)arg1 ;
-(void)setTotalUploadedOriginalSize:(unsigned long long)arg1 ;
@end

