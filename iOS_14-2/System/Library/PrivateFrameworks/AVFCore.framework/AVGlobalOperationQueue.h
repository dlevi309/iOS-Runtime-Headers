/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class NSOperationQueue, NSArray;

@interface AVGlobalOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (copy,readonly) NSArray * unfinishedOperations; 
+(id)defaultQueue;
-(void)enqueueOperation:(id)arg1 ;
-(id)init;
-(NSArray *)unfinishedOperations;
-(id)description;
-(void)dealloc;
@end

