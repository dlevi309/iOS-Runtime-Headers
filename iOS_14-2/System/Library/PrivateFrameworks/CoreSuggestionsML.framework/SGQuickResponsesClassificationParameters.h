/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject {

	double _positiveSamplingRate;
	double _dynamicLabelSamplingRate;
	double _negativeSamplingRate;
	unsigned long long _maxReplyLength;
	unsigned long long _maxPromptLength;
	double _maxPromptWindowSeconds;
	NSString* _promptJoiningString;

}

@property (nonatomic,readonly) double positiveSamplingRate;                     //@synthesize positiveSamplingRate=_positiveSamplingRate - In the implementation block
@property (nonatomic,readonly) double dynamicLabelSamplingRate;                 //@synthesize dynamicLabelSamplingRate=_dynamicLabelSamplingRate - In the implementation block
@property (nonatomic,readonly) double negativeSamplingRate;                     //@synthesize negativeSamplingRate=_negativeSamplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxReplyLength;               //@synthesize maxReplyLength=_maxReplyLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPromptLength;              //@synthesize maxPromptLength=_maxPromptLength - In the implementation block
@property (nonatomic,readonly) double maxPromptWindowSeconds;                   //@synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds - In the implementation block
@property (nonatomic,readonly) NSString * promptJoiningString;                  //@synthesize promptJoiningString=_promptJoiningString - In the implementation block
-(unsigned long long)maxReplyLength;
-(unsigned long long)maxPromptLength;
-(NSString *)promptJoiningString;
-(double)maxPromptWindowSeconds;
-(id)initWithDictionary:(id)arg1 language:(id)arg2 ;
-(double)positiveSamplingRate;
-(double)dynamicLabelSamplingRate;
-(double)negativeSamplingRate;
@end

