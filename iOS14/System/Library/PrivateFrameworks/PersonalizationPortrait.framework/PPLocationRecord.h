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

@class NSUUID, PPLocation, PPSource, NSArray, NSString, NSSet;

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {

	NSUUID* _uuid;
	PPLocation* _location;
	PPSource* _source;
	unsigned char _algorithm;
	float _initialScore;
	float _decayRate;
	NSArray* _contextualNamedEntities;
	NSString* _extractionOsBuild;
	unsigned _extractionAssetVersion;
	char _bucketizedSentimentScore;
	BOOL _isAmbiguous;

}

@property (nonatomic,readonly) BOOL isAmbiguous;                               //@synthesize isAmbiguous=_isAmbiguous - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) PPLocation * location; 
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) unsigned short algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) NSArray * contextualNamedEntities;              //@synthesize contextualNamedEntities=_contextualNamedEntities - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                   //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)sharedAmbiguousRecord;
+(id)describeAlgorithm:(unsigned short)arg1 ;
+(id)algorithmForName:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(unsigned short)algorithm;
-(double)decayRate;
-(unsigned)extractionAssetVersion;
-(NSUUID *)uuid;
-(NSSet *)featureNames;
-(id)init;
-(double)sentimentScore;
-(NSString *)extractionOsBuild;
-(PPLocation *)location;
-(double)initialScore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init_;
-(unsigned long long)hash;
-(id)initAmbiguousRecord;
-(BOOL)isEqualToLocationRecord:(id)arg1 ;
-(void)supplementFieldsWithClusterID:(id)arg1 locationWithLatLong:(id)arg2 ;
-(NSArray *)contextualNamedEntities;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAmbiguous;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PPSource *)source;
@end

