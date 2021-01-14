/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AutoEditLib.PipelineExportController : NSObject <NSCopying> {

	 collection;
	 memory;
	 moodService;
	 queue;
	 memoryPublisherOutput;
	 blueprint;
	 picklistPublisherOutput;
	 downloadPublisherOutput;
	 durationRangeOutput;
	 token;

}
-(id)init;
-(void)cancel;
-(id)copyWithZone:(void*)arg1 ;
-(id)initWithCollection:(id)arg1 memory:(id)arg2 moodService:(id)arg3 queue:(id)arg4 ;
-(void)receiveWithRequestedDuration:(double)arg1 requestedKeyAsset:(id)arg2 requestedBlueprint:(id)arg3 requestedSuggestions:(id)arg4 requestedTitle:(id)arg5 requestedSubtitle:(id)arg6 fullPicklist:(id)arg7 naturalSize:(CGSize)arg8 completionHandler:(/*^block*/id)arg9 ;
@end

