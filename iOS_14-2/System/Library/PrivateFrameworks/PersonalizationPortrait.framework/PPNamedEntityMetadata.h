/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPNamedEntityMetadata : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned short _impressionCount;
	unsigned short _occurrencesInSource;

}

@property (nonatomic,readonly) unsigned short impressionCount;                  //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToNamedEntityMetadata:(id)arg1 ;
-(unsigned short)occurrencesInSource;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)impressionCount;
-(BOOL)isEqual:(id)arg1 ;
@end

