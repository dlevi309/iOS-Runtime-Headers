/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSGTextualResponseSuggestion, PSGStructuredInfoSuggestion;

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying> {

	PSGTextualResponseSuggestion* _textualResponseSuggestion;
	PSGStructuredInfoSuggestion* _structuredInfoSuggestion;

}

@property (nonatomic,readonly) PSGTextualResponseSuggestion * textualResponseSuggestion;              //@synthesize textualResponseSuggestion=_textualResponseSuggestion - In the implementation block
@property (nonatomic,readonly) PSGStructuredInfoSuggestion * structuredInfoSuggestion;                //@synthesize structuredInfoSuggestion=_structuredInfoSuggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)predictedValue;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTextualResponseSuggestion:(id)arg1 structuredInfoSuggestion:(id)arg2 ;
-(PSGStructuredInfoSuggestion *)structuredInfoSuggestion;
-(PSGTextualResponseSuggestion *)textualResponseSuggestion;
@end

