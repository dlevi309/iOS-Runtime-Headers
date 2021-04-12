/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class NSMutableArray, NSOperation, NSArray;

@interface STSDownloadOperationInfo : NSObject {

	NSMutableArray* _beginBlocks;
	NSMutableArray* _progressBlocks;
	NSMutableArray* _completionBlocks;
	NSOperation* _operation;

}

@property (nonatomic,readonly) NSOperation * operation;                      //@synthesize operation=_operation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * progressBlocks; 
@property (nonatomic,copy,readonly) NSArray * completionBlocks; 
-(NSArray *)completionBlocks;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSOperation *)operation;
-(id)initWithOperation:(id)arg1 begin:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)beginBlocks;
-(NSArray *)progressBlocks;
-(void)addBegin:(/*^block*/id)arg1 ;
-(void)addProgress:(/*^block*/id)arg1 ;
@end

