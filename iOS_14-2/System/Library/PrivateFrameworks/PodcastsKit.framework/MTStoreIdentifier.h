/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject {

	NSNumber* _storeIdentifier;
	NSString* _feedUrl;

}

@property (nonatomic,retain) NSNumber * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * feedUrl;                      //@synthesize feedUrl=_feedUrl - In the implementation block
+(BOOL)isEmpty:(long long)arg1 ;
+(long long)adamIDFromSerpentId:(long long)arg1 ;
+(long long)serpentIdFromAdamId:(long long)arg1 ;
+(BOOL)isEmptyNumber:(id)arg1 ;
+(id)adamIdNumberFromSerpentIdNumber:(id)arg1 ;
+(id)serpentIdNumberFromAdamIdNumber:(id)arg1 ;
+(id)podcastPredicateForIdentifer:(id)arg1 ;
+(BOOL)isNotEmpty:(long long)arg1 ;
+(id)identifierWithFeedUrl:(id)arg1 ;
+(id)identifierWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2 ;
+(id)episodePredicateForIdentifier:(id)arg1 ;
+(id)adamIDListFromSerpentIdList:(id)arg1 ;
+(id)adamIdNumberFromStoreId:(long long)arg1 ;
+(id)serpentIdListFromAdamIDList:(id)arg1 ;
+(id)serpentIdNumberFromStoreId:(long long)arg1 ;
+(BOOL)isNotEmptyNumber:(id)arg1 ;
-(NSString *)feedUrl;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)storeIdentifier;
-(void)setFeedUrl:(NSString *)arg1 ;
-(id)initWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2 ;
-(id)initWithFeedUrl:(id)arg1 ;
@end

