/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString, NSArray;

@interface FCPublisherTopicFeature : FCPersonalizationFeature {

	NSString* _publisherTagID;
	NSString* _topicTagID;

}

@property (nonatomic,retain) NSString * publisherTagID;              //@synthesize publisherTagID=_publisherTagID - In the implementation block
@property (nonatomic,retain) NSString * topicTagID;                  //@synthesize topicTagID=_topicTagID - In the implementation block
@property (nonatomic,readonly) NSArray * features; 
-(id)init;
-(NSArray *)features;
-(NSString *)publisherTagID;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)fr_description;
-(void)setPublisherTagID:(NSString *)arg1 ;
-(void)setTopicTagID:(NSString *)arg1 ;
-(id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2 ;
-(NSString *)topicTagID;
@end

