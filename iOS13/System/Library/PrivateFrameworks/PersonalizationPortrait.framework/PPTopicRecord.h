/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/PPRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPTopic, PPSource, NSString, PPTopicMetadata;

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding> {

	PPTopic* _topic;
	PPSource* _source;
	unsigned long long _algorithm;
	double _initialScore;
	double _decayRate;
	BOOL _isLocal;
	NSString* _extractionOsBuild;
	unsigned long long _extractionAssetVersion;
	PPTopicMetadata* _metadata;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) PPTopic * topic;                                        //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) PPSource * source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm;                           //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) double initialScore;                                    //@synthesize initialScore=_initialScore - In the implementation block
@property (nonatomic,readonly) double decayRate;                                       //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) BOOL isLocal;                                           //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                           //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionAssetVersion;              //@synthesize extractionAssetVersion=_extractionAssetVersion - In the implementation block
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) PPTopicMetadata * metadata;                             //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPSource *)source;
-(PPTopicMetadata *)metadata;
-(unsigned long long)algorithm;
-(double)decayRate;
-(double)sentimentScore;
-(PPTopic *)topic;
-(BOOL)isLocal;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned long long)extractionAssetVersion;
-(BOOL)isEqualToTopicRecord:(id)arg1 ;
@end

