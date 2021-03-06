/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PSGInputSuggestionsExplanationSet;

@interface PSGInputSuggestionsResponse : NSObject <NSSecureCoding, NSCopying> {

	int _triggeredItemsCount;
	NSArray* _responseItems;
	PSGInputSuggestionsExplanationSet* _explanationSet;
	double _triggeringTimeMillis;
	double _servingTimeMillis;

}

@property (assign,nonatomic) double triggeringTimeMillis;                                       //@synthesize triggeringTimeMillis=_triggeringTimeMillis - In the implementation block
@property (assign,nonatomic) int triggeredItemsCount;                                           //@synthesize triggeredItemsCount=_triggeredItemsCount - In the implementation block
@property (assign,nonatomic) double servingTimeMillis;                                          //@synthesize servingTimeMillis=_servingTimeMillis - In the implementation block
@property (nonatomic,readonly) NSArray * responseItems;                                         //@synthesize responseItems=_responseItems - In the implementation block
@property (nonatomic,readonly) PSGInputSuggestionsExplanationSet * explanationSet;              //@synthesize explanationSet=_explanationSet - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithResponseItems:(id)arg1 explanationSet:(id)arg2 ;
-(PSGInputSuggestionsExplanationSet *)explanationSet;
-(NSArray *)responseItems;
-(double)triggeringTimeMillis;
-(void)setTriggeringTimeMillis:(double)arg1 ;
-(int)triggeredItemsCount;
-(void)setTriggeredItemsCount:(int)arg1 ;
-(double)servingTimeMillis;
-(void)setServingTimeMillis:(double)arg1 ;
@end

