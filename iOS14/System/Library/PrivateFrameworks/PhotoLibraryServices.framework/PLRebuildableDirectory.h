/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSURL, PLPhotoLibrary, NSFileManager;

@interface PLRebuildableDirectory : NSObject {

	BOOL _isCPLAssets;
	BOOL _isPhotoStream;
	NSURL* _url;
	PLPhotoLibrary* _photoLibrary;
	NSFileManager* _fm;
	double _startTime;

}

@property (readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (readonly) BOOL isCPLAssets;                           //@synthesize isCPLAssets=_isCPLAssets - In the implementation block
@property (readonly) BOOL isPhotoStream;                         //@synthesize isPhotoStream=_isPhotoStream - In the implementation block
@property (readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) NSFileManager * fm;                         //@synthesize fm=_fm - In the implementation block
@property (readonly) double startTime;                           //@synthesize startTime=_startTime - In the implementation block
+(void)collectFileURLs:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 testCreationDates:(BOOL)arg6 startTime:(double)arg7 pathManager:(id)arg8 ;
+(id)rebuildableDirectoryWithURL:(id)arg1 isCPLAssets:(BOOL)arg2 isPhotoStream:(BOOL)arg3 photoLibrary:(id)arg4 startTime:(double)arg5 ;
-(NSFileManager *)fm;
-(PLPhotoLibrary *)photoLibrary;
-(id)debugDescription;
-(NSURL *)url;
-(id)description;
-(void)gatherAssetsToImport:(id)arg1 pendingAssetsCount:(unsigned long long*)arg2 onDiskURLsToSkip:(id)arg3 cameraRollOnly:(BOOL)arg4 ;
-(BOOL)isCPLAssets;
-(BOOL)isPhotoStream;
-(void)_collectContentsOfDirectoryURL:(id)arg1 urlsToSkip:(id)arg2 forAddingToAlbum:(id)arg3 intoAssetsArray:(id)arg4 assetsKind:(int)arg5 startTime:(double)arg6 ;
-(double)startTime;
@end

