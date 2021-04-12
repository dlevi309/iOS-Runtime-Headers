/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/APFormatter.h>

@interface MinMaxIntFormatter : APFormatter {

	long long _minimum;
	long long _maximum;

}
+(id)formatterForMin:(long long)arg1 max:(long long)arg2 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(long long)minimum;
-(void)setMinimum:(long long)arg1 ;
-(long long)maximum;
-(void)setMaximum:(long long)arg1 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 ;
@end

