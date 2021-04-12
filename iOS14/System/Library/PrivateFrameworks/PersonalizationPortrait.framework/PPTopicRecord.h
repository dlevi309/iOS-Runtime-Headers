/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/PPRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class PPTopic, PPSource, NSString, PPTopicMetadata, NSSet;

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {

	PPTopic* _topic;
	PPSource* _source;
	unsigned long long _algorithm;
	double _initialScore;
	double _decayRate;
	BOOL _isLocal;
	NSString* _extractionOsBuild;
	unsigned _extractionAssetVersion;
	PPTopicMetadata* _metadata;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) PPTopic * topic;                              //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) PPSource * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm;                 //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) double initialScore;                          //@synthesize initialScore=_initialScore - In the implementation block
@property (nonatomic,readonly) double decayRate;                             //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) BOOL isLocal;                                 //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                 //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned extractionAssetVersion;              //@synthesize extractionAssetVersion=_extractionAssetVersion - In the implementation block
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) PPTopicMetadata * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
+(id)algorithmForName:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(unsigned long long)algorithm;
-(BOOL)isLocal;
-(double)decayRate;
-(unsigned)extractionAssetVersion;
-(NSSet *)featureNames;
-(PPTopic *)topic;
-(double)sentimentScore;
-(NSString *)extractionOsBuild;
-(double)initialScore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToTopicRecord:(id)arg1 ;
-(PPTopicMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PPSource *)source;
@end

