/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PPNamedEntityMetadata : _PASZonedObject <NSCopying, NSSecureCoding> {

	unsigned short _impressionCount;
	unsigned short _occurrencesInSource;

}

@property (nonatomic,readonly) unsigned short impressionCount;                  //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(BOOL)isEqualToNamedEntityMetadata:(id)arg1 ;
-(unsigned short)impressionCount;
-(unsigned short)occurrencesInSource;
@end

