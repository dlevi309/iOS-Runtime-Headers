/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {

	unsigned short _separator;
	NSMutableArray* _formatters;
	NSMutableSet* _formatStrings;

}
-(id)formatStrings;
-(unsigned short)separator;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id*)arg3 perfect:(BOOL*)arg4 ;
-(void)addFormat:(id)arg1 locale:(id)arg2 ;
@end

