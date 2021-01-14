/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCorePipeline.framework/IMCorePipeline
*/


@class IMResult, NSMutableArray;

@interface IMPromise : NSObject {

	IMResult* _result;
	NSMutableArray* _completionBlocks;

}
+(id)all:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(BOOL)completed;
-(id)initWithValue:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)fullfillWithValue:(id)arg1 ;
-(void)registerCompletionBlock:(/*^block*/id)arg1 ;
@end

