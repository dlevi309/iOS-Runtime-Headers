/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {

	CPLTransaction* _dirty;
	/*^block*/id _block;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id block;                          //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)block;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)completionHandler;
-(void)dealloc;
-(void)_releaseDirty;
@end

