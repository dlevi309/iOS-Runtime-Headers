/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject {

	double _positiveSamplingRate;
	double _negativeSamplingRate;
	unsigned long long _maxPromptLength;
	double _maxPromptWindowSeconds;
	NSString* _promptJoiningString;

}

@property (nonatomic,readonly) double positiveSamplingRate;                     //@synthesize positiveSamplingRate=_positiveSamplingRate - In the implementation block
@property (nonatomic,readonly) double negativeSamplingRate;                     //@synthesize negativeSamplingRate=_negativeSamplingRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxPromptLength;              //@synthesize maxPromptLength=_maxPromptLength - In the implementation block
@property (nonatomic,readonly) double maxPromptWindowSeconds;                   //@synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds - In the implementation block
@property (nonatomic,readonly) NSString * promptJoiningString;                  //@synthesize promptJoiningString=_promptJoiningString - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(double)maxPromptWindowSeconds;
-(unsigned long long)maxPromptLength;
-(NSString *)promptJoiningString;
-(double)positiveSamplingRate;
-(double)negativeSamplingRate;
@end

