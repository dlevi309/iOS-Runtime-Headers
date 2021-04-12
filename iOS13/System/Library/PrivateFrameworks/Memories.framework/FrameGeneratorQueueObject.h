/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class AVAssetImageGenerator, NSArray;

@interface FrameGeneratorQueueObject : NSObject {

	AVAssetImageGenerator* m_whichInstance;
	/*^block*/id m_completionBlock;
	NSArray* m_times;

}

@property (nonatomic,retain) AVAssetImageGenerator * generator; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,retain) NSArray * times; 
+(id)queueObjectForGenerator:(id)arg1 withTimes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(AVAssetImageGenerator *)generator;
-(void)setGenerator:(AVAssetImageGenerator *)arg1 ;
-(void)setTimes:(NSArray *)arg1 ;
-(NSArray *)times;
@end

