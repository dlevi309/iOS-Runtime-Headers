/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface OITSUDateFormatCategory : NSObject {

	CFDateFormatterRef _initialFormatter;
	NSMutableArray* _entries;

}
-(void)dealloc;
-(id)initialPattern;
-(id)formatStringsDictionary;
-(id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithInitialPattern:(id)arg1 locale:(id)arg2 ;
-(void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(id)arg3 ;
-(id)entryForSeparator:(unsigned short)arg1 ;
@end

