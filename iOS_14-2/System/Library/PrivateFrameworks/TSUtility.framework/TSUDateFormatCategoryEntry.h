/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject {

	unsigned short mSeparator;
	CFArrayRef mFormatters;
	NSMutableSet* mFormatStrings;

}
-(unsigned short)separator;
-(void)dealloc;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 ;
@end

