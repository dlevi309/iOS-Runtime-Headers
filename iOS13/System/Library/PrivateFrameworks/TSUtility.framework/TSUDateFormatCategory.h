/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {

	CFDateFormatterRef mInitialFormatter;
	NSMutableArray* mEntries;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithInitialPattern:(id)arg1 locale:(CFLocaleRef)arg2 ;
-(void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(CFLocaleRef)arg3 ;
-(id)entryForSeparator:(unsigned short)arg1 ;
@end

