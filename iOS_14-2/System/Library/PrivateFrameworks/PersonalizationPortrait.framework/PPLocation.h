/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class CLPlacemark, PPLocationRecord, NSString, NSSet;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned short _category;
	CLPlacemark* _placemark;
	PPLocationRecord* _mostRelevantRecord;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                       //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                            //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) unsigned short category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) PPLocationRecord * mostRelevantRecord;              //@synthesize mostRelevantRecord=_mostRelevantRecord - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(id)clusterIdentifierFromPlacemark:(id)arg1 ;
+(id)describeCategory:(unsigned short)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(NSSet *)featureNames;
-(id)init;
-(id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3 ;
-(PPLocationRecord *)mostRelevantRecord;
-(NSString *)clusterIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)category;
-(id)customizedDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CLPlacemark *)placemark;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

