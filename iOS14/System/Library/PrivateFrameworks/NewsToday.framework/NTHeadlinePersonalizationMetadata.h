/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTHeadlinePersonalizationMetadata.h>
@class NSString, NSDictionary;


@protocol NTHeadlinePersonalizationMetadata <NSSecureCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSDictionary * scoredTopicIDs; 
@required
-(NSString *)articleID;
-(NSString *)publisherID;
-(NSDictionary *)scoredTopicIDs;

@end


@class NSString, NSDictionary;

@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata> {

	NSString* _articleID;
	NSString* _publisherID;
	NSDictionary* _scoredTopicIDs;

}

@property (nonatomic,copy,readonly) NSString * articleID;                       //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherID;                     //@synthesize publisherID=_publisherID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * scoredTopicIDs;              //@synthesize scoredTopicIDs=_scoredTopicIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)articleID;
-(NSString *)publisherID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)scoredTopicIDs;
-(id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3 ;
@end

