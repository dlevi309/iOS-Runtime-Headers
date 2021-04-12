/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/APFormatter.h>

@interface MinMaxIntFormatter : APFormatter {

	long long _minimum;
	long long _maximum;

}
+(id)formatterForMin:(long long)arg1 max:(long long)arg2 ;
-(long long)maximum;
-(long long)minimum;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(void)setMinimum:(long long)arg1 ;
-(void)setMaximum:(long long)arg1 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 ;
@end

