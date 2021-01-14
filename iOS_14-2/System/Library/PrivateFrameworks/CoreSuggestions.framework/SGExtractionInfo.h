/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SGExtractionInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _extractionType;
	NSNumber* _modelVersion;
	NSNumber* _confidence;

}

@property (nonatomic,readonly) unsigned long long extractionType;              //@synthesize extractionType=_extractionType - In the implementation block
@property (nonatomic,readonly) NSNumber * modelVersion;                        //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                          //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)extractionInfoWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3 ;
-(NSNumber *)confidence;
-(NSNumber *)modelVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3 ;
-(unsigned long long)extractionType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

