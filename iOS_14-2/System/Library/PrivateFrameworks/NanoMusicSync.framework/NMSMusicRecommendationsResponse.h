/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSData, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsResponse : NSObject {

	NSData* _cachedData;
	NMSMutableMediaSyncInfo* _importedStoreContainerItemMappings;
	NSOrderedSet* _recommendations;

}

@property (nonatomic,readonly) NSData * cachedData;                                                       //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) NMSMutableMediaSyncInfo * importedStoreContainerItemMappings;              //@synthesize importedStoreContainerItemMappings=_importedStoreContainerItemMappings - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * recommendations;                                            //@synthesize recommendations=_recommendations - In the implementation block
-(NSData *)cachedData;
-(NMSMutableMediaSyncInfo *)importedStoreContainerItemMappings;
-(id)initWithCachedData:(id)arg1 importedStoreContainerItemMappings:(id)arg2 recommendations:(id)arg3 ;
-(NSOrderedSet *)recommendations;
@end

