/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFetchOperation.h>

@class NSArray;

@interface FCAssetsFetchOperation : FCFetchOperation {

	/*^block*/id _progressHandler;
	NSArray* _assetHandles;

}

@property (nonatomic,copy) NSArray * assetHandles;              //@synthesize assetHandles=_assetHandles - In the implementation block
@property (nonatomic,copy) id progressHandler;                  //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)initWithAssetHandles:(id)arg1 ;
-(void)performOperation;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithAssetHandle:(id)arg1 ;
-(void)setAssetHandles:(NSArray *)arg1 ;
-(NSArray *)assetHandles;
-(id)progressHandler;
-(void)_finish;
@end

