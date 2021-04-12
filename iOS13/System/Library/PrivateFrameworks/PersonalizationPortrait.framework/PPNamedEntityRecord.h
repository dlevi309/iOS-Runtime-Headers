/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/PPRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPSource, NSString, PPNamedEntity, PPNamedEntityMetadata;

@interface PPNamedEntityRecord : _PASZonedObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding> {

	PPNamedEntity* _entity;
	PPSource* _source;
	NSString* _extractionOsBuild;
	float _initialScore;
	float _decayRate;
	unsigned short _extractionAssetVersion;
	unsigned char _algorithm;
	unsigned char _changeType;
	PPNamedEntityMetadata* _metadata;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) PPNamedEntity * entity;                                 //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) PPSource * source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) NSString * extractionOsBuild;                           //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionAssetVersion; 
@property (nonatomic,readonly) unsigned char changeType;                               //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) PPNamedEntityMetadata * metadata; 
+(BOOL)supportsSecureCoding;
+(id)describeChangeType:(unsigned char)arg1 ;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPSource *)source;
-(unsigned char)changeType;
-(PPNamedEntityMetadata *)metadata;
-(unsigned long long)algorithm;
-(double)decayRate;
-(double)sentimentScore;
-(PPNamedEntity *)entity;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned long long)extractionAssetVersion;
-(BOOL)isEqualToNamedEntityRecord:(id)arg1 ;
@end

