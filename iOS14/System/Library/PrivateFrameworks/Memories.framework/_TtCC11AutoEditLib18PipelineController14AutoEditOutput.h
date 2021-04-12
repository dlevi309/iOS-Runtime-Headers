/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class Project, AVPlayerItem, MiroBlueprint, MiroPickList, NSSet, NSDictionary;

@interface _TtCC11AutoEditLib18PipelineController14AutoEditOutput : NSObject {

	 project;
	 playerItem;
	 durationRange;
	 duration;
	 maxDuration;
	 maxDurationRange;
	 blueprint;
	 totalAssetCount;
	 downloadErrorCount;
	 picklist;
	 suggestions;
	 freezeRanges;
	 buckets;
	 pickedItemCount;

}

@property (readonly,nonatomic) Project * project; 
@property (readonly,nonatomic) AVPlayerItem * playerItem; 
@property (readonly,nonatomic) double durationRange; 
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) double maxDuration; 
@property (readonly,nonatomic) double maxDurationRange; 
@property (readonly,nonatomic) MiroBlueprint * blueprint; 
@property (readonly,nonatomic) long long totalAssetCount; 
@property (readonly,nonatomic) long long downloadErrorCount; 
@property (readonly,nonatomic) MiroPickList * picklist; 
@property (readonly,nonatomic) NSSet * suggestions; 
@property (readonly,nonatomic) NSDictionary * freezeRanges; 
@property (readonly,nonatomic) Buckets buckets; 
@property (readonly,nonatomic) long long pickedItemCount; 
-(NSSet *)suggestions;
-(MiroBlueprint *)blueprint;
-(id)init;
-(double)maxDuration;
-(Buckets)buckets;
-(long long)totalAssetCount;
-(double)duration;
-(Project *)project;
-(AVPlayerItem *)playerItem;
-(double)durationRange;
-(MiroPickList *)picklist;
-(NSDictionary *)freezeRanges;
-(long long)pickedItemCount;
-(double)maxDurationRange;
-(long long)downloadErrorCount;
@end

