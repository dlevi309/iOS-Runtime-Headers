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

@class NSUUID, PPLocation, PPSource, NSArray, NSString;

@interface PPLocationRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSUUID* _uuid;
	PPLocation* _location;
	PPSource* _source;
	unsigned char _algorithm;
	float _initialScore;
	float _decayRate;
	NSArray* _contextualNamedEntities;
	NSString* _extractionOsBuild;
	unsigned short _extractionAssetVersion;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) PPLocation * location; 
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) unsigned short algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) NSArray * contextualNamedEntities;                      //@synthesize contextualNamedEntities=_contextualNamedEntities - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                           //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionAssetVersion; 
+(BOOL)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned short)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPSource *)source;
-(NSUUID *)uuid;
-(PPLocation *)location;
-(unsigned short)algorithm;
-(double)decayRate;
-(double)sentimentScore;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned long long)extractionAssetVersion;
-(id)init_;
-(BOOL)isEqualToLocationRecord:(id)arg1 ;
-(NSArray *)contextualNamedEntities;
@end

