/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/APFormatter.h>

@class NSCharacterSet, NSString;

@interface MACFormatter : APFormatter {

	NSCharacterSet* _possibleSeparators;
	NSCharacterSet* _possibleSeparatorsInvertedSet;
	NSString* _userPreferredSeparator;

}
+(id)macFormatter;
+(id)macAddressSet;
+(id)sharedMACFormatter;
+(BOOL)parseMACAddress:(const char*)arg1 intoHexString:(char*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setPossibleSeparators:(id)arg1 ;
-(id)possibleSeparators;
-(void)setPossibleSeparatorsInvertedSet:(id)arg1 ;
-(void)setUserPreferredSeparator:(id)arg1 ;
-(void)removeMACAddressSeparatorsFromString:(id)arg1 ;
-(id)possibleSeparatorsInvertedSet;
-(id)userPreferredSeparator;
@end

