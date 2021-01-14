/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)times;
-(id)description;
-(void)setGenerator:(AVAssetImageGenerator *)arg1 ;
-(AVAssetImageGenerator *)generator;
-(void)dealloc;
-(void)setTimes:(NSArray *)arg1 ;
@end

