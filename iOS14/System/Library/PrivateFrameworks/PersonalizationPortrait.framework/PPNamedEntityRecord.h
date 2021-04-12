/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/PPRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class PPSource, NSString, PPNamedEntity, PPNamedEntityMetadata, NSSet;

@interface PPNamedEntityRecord : _PASZonedObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {

	PPNamedEntity* _entity;
	PPSource* _source;
	NSString* _extractionOsBuild;
	float _initialScore;
	float _decayRate;
	unsigned _extractionAssetVersion;
	unsigned char _algorithm;
	unsigned char _changeType;
	PPNamedEntityMetadata* _metadata;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) PPNamedEntity * entity;                        //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) PPSource * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) NSString * extractionOsBuild;                  //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@property (nonatomic,readonly) unsigned char changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) PPNamedEntityMetadata * metadata; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
+(id)describeChangeType:(unsigned char)arg1 ;
+(id)algorithmForName:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(unsigned long long)algorithm;
-(double)decayRate;
-(unsigned)extractionAssetVersion;
-(PPNamedEntity *)entity;
-(unsigned char)changeType;
-(NSSet *)featureNames;
-(double)sentimentScore;
-(NSString *)extractionOsBuild;
-(BOOL)isEqualToNamedEntityRecord:(id)arg1 ;
-(double)initialScore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PPNamedEntityMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PPSource *)source;
@end

