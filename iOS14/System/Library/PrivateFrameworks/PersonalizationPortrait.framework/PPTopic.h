/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, PPTopicRecord, NSSet;

@interface PPTopic : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	NSString* _topicIdentifier;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                    //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * topicIdentifier;                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,readonly) PPTopicRecord * mostRelevantRecord; 
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)clusterIdentifierFromTopicId:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(id)id;
-(NSSet *)featureNames;
-(PPTopicRecord *)mostRelevantRecord;
-(double)sentimentScore;
-(NSString *)clusterIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2 ;
-(id)description;
-(NSString *)topicIdentifier;
-(id)initWithTopicIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithId:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToTopic:(id)arg1 ;
@end

