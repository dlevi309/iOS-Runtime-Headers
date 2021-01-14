/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(unsigned long long)batchSize;
-(void)resetPersonsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetPersons:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requiresPhotoAnalysisReset;
-(void)setRequiresPhotoAnalysisReset:(BOOL)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)dealloc;
@end

