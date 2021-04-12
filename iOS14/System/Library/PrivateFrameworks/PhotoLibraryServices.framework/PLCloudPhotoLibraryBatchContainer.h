/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject {

	BOOL _wasSplit;
	BOOL _reachedMinSplit;
	BOOL _wasFixed;
	CPLChangeBatch* _batch;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CPLChangeBatch * batch;                     //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL wasSplit;                              //@synthesize wasSplit=_wasSplit - In the implementation block
@property (assign,nonatomic) BOOL reachedMinSplit;                       //@synthesize reachedMinSplit=_reachedMinSplit - In the implementation block
@property (assign,nonatomic) BOOL wasFixed;                              //@synthesize wasFixed=_wasFixed - In the implementation block
-(CPLChangeBatch *)batch;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)init;
-(BOOL)wasSplit;
-(BOOL)wasFixed;
-(unsigned long long)count;
-(void)setWasFixed:(BOOL)arg1 ;
-(id)batchesSplitForError;
-(void)incrementRetryCount;
-(id)description;
-(id)lastAddedRecord;
-(void)setWasSplit:(BOOL)arg1 ;
-(BOOL)reachedMinSplit;
-(void)setReachedMinSplit:(BOOL)arg1 ;
-(void)setBatch:(CPLChangeBatch *)arg1 ;
-(void)addRecord:(id)arg1 ;
@end

