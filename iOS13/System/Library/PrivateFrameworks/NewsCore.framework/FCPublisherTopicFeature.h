/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2 ;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)fr_description;
-(void)setPublisherTagID:(NSString *)arg1 ;
-(void)setTopicTagID:(NSString *)arg1 ;
-(NSString *)publisherTagID;
-(NSString *)topicTagID;
@end

