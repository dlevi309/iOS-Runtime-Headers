/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PPTopicRecord;

@interface PPTopic : NSObject <NSCopying, NSSecureCoding> {

	NSString* _topicIdentifier;

}

@property (nonatomic,readonly) NSString * topicIdentifier;                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,readonly) PPTopicRecord * mostRelevantRecord; 
@property (nonatomic,readonly) double sentimentScore; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)sentimentScore;
-(NSString *)topicIdentifier;
-(PPTopicRecord *)mostRelevantRecord;
-(id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2 ;
-(id)initWithTopicIdentifier:(id)arg1 ;
-(BOOL)isEqualToTopic:(id)arg1 ;
-(id)initWithId:(id)arg1 ;
-(id)id;
@end

