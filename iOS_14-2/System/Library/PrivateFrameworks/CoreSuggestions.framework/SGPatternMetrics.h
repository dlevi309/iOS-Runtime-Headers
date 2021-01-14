/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMSelfIdPatternMatched;

@interface SGPatternMetrics : NSObject {

	SGMSelfIdPatternMatched* _selfIdPatternMatched;

}

@property (nonatomic,retain) SGMSelfIdPatternMatched * selfIdPatternMatched;              //@synthesize selfIdPatternMatched=_selfIdPatternMatched - In the implementation block
+(void)recordSelfIdMatchWithPatternType:(SGMSIPatternType_)arg1 patternHash:(id)arg2 nameTokenCount:(unsigned long long)arg3 nameClassification:(SGMSINameClassification_)arg4 messageIndex:(unsigned long long)arg5 ;
+(id)instance;
-(void)setSelfIdPatternMatched:(SGMSelfIdPatternMatched *)arg1 ;
-(id)init;
-(SGMSelfIdPatternMatched *)selfIdPatternMatched;
@end

