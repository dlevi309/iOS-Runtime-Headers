/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject {

	unsigned short mSeparator;
	CFArrayRef mFormatters;
	NSMutableSet* mFormatStrings;

}
-(void)dealloc;
-(unsigned short)separator;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 ;
@end

