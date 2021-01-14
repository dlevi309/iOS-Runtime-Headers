/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface AutoEditLib.PipelinePregenerateController : NSObject {

	 collection;
	 memory;
	 memoryPublisherOutput;
	 blueprint;
	 picklistPublisherOutput;
	 durationRangeOutput;
	 token;
	 secondToken;

}
-(id)init;
-(void)cancel;
-(id)initWithCollection:(id)arg1 memory:(id)arg2 ;
-(void)receiveWithRequestedDuration:(double)arg1 requestedKeyAsset:(id)arg2 requestedBlueprint:(id)arg3 requestedSuggestions:(id)arg4 naturalSize:(CGSize)arg5 queue:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

