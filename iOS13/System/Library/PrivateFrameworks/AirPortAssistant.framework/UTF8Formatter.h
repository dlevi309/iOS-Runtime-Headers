/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/APFormatter.h>

@interface UTF8Formatter : APFormatter {

	unsigned long long _maxByteCount;

}
+(id)utf8Formatter:(unsigned long long)arg1 ;
+(id)afpSet;
+(id)utf8Formatter;
+(id)utf8FormatterWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
+(id)afpFormatter:(unsigned long long)arg1 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initAFPFormatterWithLength:(unsigned long long)arg1 ;
-(void)setMaxByteCount:(unsigned long long)arg1 ;
-(unsigned long long)maxByteCount;
@end

