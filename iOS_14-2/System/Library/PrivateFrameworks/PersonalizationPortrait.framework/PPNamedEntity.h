/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, PPNamedEntityRecord, NSSet;

@interface PPNamedEntity : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	NSString* _name;
	unsigned long long _category;
	NSString* _dynamicCategory;
	NSString* _bestLanguage;
	NSString* _clusterIdentifier;

}

@property (nonatomic,readonly) NSString * clusterIdentifier;                          //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * dynamicCategory;                            //@synthesize dynamicCategory=_dynamicCategory - In the implementation block
@property (nonatomic,readonly) NSString * bestLanguage;                               //@synthesize bestLanguage=_bestLanguage - In the implementation block
@property (nonatomic,readonly) PPNamedEntityRecord * mostRelevantRecord; 
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)categoryForDescription:(id)arg1 ;
+(id)clusterIdentifierFromName:(id)arg1 ;
+(id)describeCategory:(unsigned long long)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSString *)bestLanguage;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4 ;
-(NSSet *)featureNames;
-(PPNamedEntityRecord *)mostRelevantRecord;
-(double)sentimentScore;
-(NSString *)clusterIdentifier;
-(BOOL)isEqualToNamedEntity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)category;
-(NSString *)name;
-(NSString *)dynamicCategory;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4 mostRelevantRecord:(id)arg5 ;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

