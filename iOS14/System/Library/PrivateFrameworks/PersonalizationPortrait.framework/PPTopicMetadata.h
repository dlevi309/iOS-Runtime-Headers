/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	BOOL _exactMatchInSourceText;
	unsigned short _impressionCount;
	unsigned short _occurrencesInSource;
	unsigned short _algorithmResultPosition;
	unsigned short _algorithmResultCount;

}

@property (nonatomic,readonly) unsigned short impressionCount;                      //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;                  //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
@property (nonatomic,readonly) unsigned short algorithmResultPosition;              //@synthesize algorithmResultPosition=_algorithmResultPosition - In the implementation block
@property (nonatomic,readonly) unsigned short algorithmResultCount;                 //@synthesize algorithmResultCount=_algorithmResultCount - In the implementation block
@property (nonatomic,readonly) BOOL exactMatchInSourceText;                         //@synthesize exactMatchInSourceText=_exactMatchInSourceText - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 algorithmResultPosition:(unsigned short)arg3 algorithmResultCount:(unsigned short)arg4 exactMatchInSourceText:(BOOL)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)occurrencesInSource;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToTopicMetadata:(id)arg1 ;
-(unsigned short)algorithmResultPosition;
-(unsigned short)algorithmResultCount;
-(BOOL)exactMatchInSourceText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)impressionCount;
-(BOOL)isEqual:(id)arg1 ;
@end

