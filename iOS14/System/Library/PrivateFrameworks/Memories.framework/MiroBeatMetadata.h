/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FMTimedMetadataItem *)metadataItem;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setMetadataItem:(FMTimedMetadataItem *)arg1 ;
-(id)initWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
@end

