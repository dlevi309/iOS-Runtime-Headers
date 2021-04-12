/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHPhotoLibrary, NSOperationQueue;

@interface PHPersonResetManager : NSObject {

	PHPhotoLibrary* _library;
	NSOperationQueue* _resetOperationQueue;
	BOOL _requiresPhotoAnalysisReset;
	/*^block*/id _progressHandler;
	unsigned long long _batchSize;

}

@property (nonatomic,copy) id progressHandler;                             //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                 //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) BOOL requiresPhotoAnalysisReset;              //@synthesize requiresPhotoAnalysisReset=_requiresPhotoAnalysisReset - In the implementation block
-(void)dealloc;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)resetPersonsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetPersons:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requiresPhotoAnalysisReset;
-(void)setRequiresPhotoAnalysisReset:(BOOL)arg1 ;
@end

