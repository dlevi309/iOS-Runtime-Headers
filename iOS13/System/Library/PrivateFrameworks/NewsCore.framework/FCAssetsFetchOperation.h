/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)_finish;
-(void)performOperation;
-(id)initWithAssetHandles:(id)arg1 ;
-(id)initWithAssetHandle:(id)arg1 ;
-(NSArray *)assetHandles;
-(void)setAssetHandles:(NSArray *)arg1 ;
@end

