/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {

	unsigned short _separator;
	NSMutableArray* _formatters;
	NSMutableSet* _formatStrings;

}
-(unsigned short)separator;
-(id)formatStrings;
-(id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(void)addFormat:(id)arg1 locale:(id)arg2 ;
@end

