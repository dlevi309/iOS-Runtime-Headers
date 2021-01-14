/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSURL, AVAsset;

@interface MBAssetLoaderOperation : NSOperation {

	BOOL finished;
	BOOL executing;
	NSArray* _prefetchKeys;
	NSURL* _identifierURL;
	AVAsset* _asset;
	/*^block*/id _preCompletionBlock;

}

@property (getter=isFinished) BOOL finished; 
@property (getter=isExecuting) BOOL executing; 
@property (nonatomic,retain) NSURL * identifierURL;               //@synthesize identifierURL=_identifierURL - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSArray * prefetchKeys;              //@synthesize prefetchKeys=_prefetchKeys - In the implementation block
@property (nonatomic,copy) id preCompletionBlock;                 //@synthesize preCompletionBlock=_preCompletionBlock - In the implementation block
-(void)setAsset:(AVAsset *)arg1 ;
-(void)finish;
-(void)start;
-(AVAsset *)asset;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setPreCompletionBlock:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(id)preCompletionBlock;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(NSURL *)identifierURL;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(id)initWithIdentifierURL:(id)arg1 ;
-(void)setPrefetchKeys:(NSArray *)arg1 ;
-(NSArray *)prefetchKeys;
@end

