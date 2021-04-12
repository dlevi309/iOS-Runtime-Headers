/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMSelfIdPatternMatched;

@interface SGPatternMetrics : NSObject {

	SGMSelfIdPatternMatched* _selfIdPatternMatched;

}

@property (nonatomic,retain) SGMSelfIdPatternMatched * selfIdPatternMatched;              //@synthesize selfIdPatternMatched=_selfIdPatternMatched - In the implementation block
+(id)instance;
+(void)recordSelfIdMatchWithPatternType:(SGMSIPatternType_)arg1 patternHash:(id)arg2 nameTokenCount:(unsigned long long)arg3 nameClassification:(SGMSINameClassification_)arg4 messageIndex:(unsigned long long)arg5 ;
-(id)init;
-(SGMSelfIdPatternMatched *)selfIdPatternMatched;
-(void)setSelfIdPatternMatched:(SGMSelfIdPatternMatched *)arg1 ;
@end

