/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class FMTimedMetadataItem;

@interface MiroBeatMetadata : NSObject {

	FMTimedMetadataItem* _metadataItem;
	long long _priority;

}

@property (nonatomic,retain) FMTimedMetadataItem * metadataItem;              //@synthesize metadataItem=_metadataItem - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
+(id)beatWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
-(id)description;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(FMTimedMetadataItem *)metadataItem;
-(void)setMetadataItem:(FMTimedMetadataItem *)arg1 ;
-(id)initWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
@end

