/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGObject.h>

@class NSNumber;

@interface SGExtractionInfo : SGObject {

	unsigned long long _extractionType;
	NSNumber* _modelVersion;
	NSNumber* _confidence;

}

@property (nonatomic,readonly) unsigned long long extractionType;              //@synthesize extractionType=_extractionType - In the implementation block
@property (nonatomic,readonly) NSNumber * modelVersion;                        //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                          //@synthesize confidence=_confidence - In the implementation block
+(id)extractionInfoWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3 ;
-(NSNumber *)confidence;
-(NSNumber *)modelVersion;
-(unsigned long long)extractionType;
-(id)initWithExtractionType:(unsigned long long)arg1 modelVersion:(id)arg2 confidence:(id)arg3 ;
@end

