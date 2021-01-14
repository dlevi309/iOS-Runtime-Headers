/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSObject, NSMutableArray;

@interface PregenerateHelper : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _pipelines;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pipelines;                              //@synthesize pipelines=_pipelines - In the implementation block
+(id)sharedInstance;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPipelines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pipelines;
-(void)runPregenerateWithCollection:(id)arg1 naturalSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

