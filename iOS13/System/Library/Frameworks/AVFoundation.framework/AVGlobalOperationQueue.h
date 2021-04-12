/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSOperationQueue, NSArray;

@interface AVGlobalOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (copy,readonly) NSArray * unfinishedOperations; 
+(id)defaultQueue;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)enqueueOperation:(id)arg1 ;
-(NSArray *)unfinishedOperations;
@end

