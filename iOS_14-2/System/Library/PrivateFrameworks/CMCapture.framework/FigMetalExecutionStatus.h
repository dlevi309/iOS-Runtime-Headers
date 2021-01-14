/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSMutableArray;

@interface FigMetalExecutionStatus : NSObject {

	int _completedCommandBuffersCount;
	NSMutableArray* _failedCommandBuffers;
	unsigned long long _status;

}

@property (nonatomic,retain) NSMutableArray * failedCommandBuffers;              //@synthesize failedCommandBuffers=_failedCommandBuffers - In the implementation block
@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int completedCommandBuffersCount;                   //@synthesize completedCommandBuffersCount=_completedCommandBuffersCount - In the implementation block
-(id)init;
-(NSMutableArray *)failedCommandBuffers;
-(void)setFailedCommandBuffers:(NSMutableArray *)arg1 ;
-(int)completedCommandBuffersCount;
-(void)setCompletedCommandBuffersCount:(int)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
@end

