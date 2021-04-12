/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)publisherID;
-(NSString *)articleID;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)publisherID;
-(NSString *)articleID;
-(NSDictionary *)scoredTopicIDs;
-(id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3 ;
@end

