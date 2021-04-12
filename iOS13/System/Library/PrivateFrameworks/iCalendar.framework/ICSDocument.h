/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@class ICSCalendar;

@interface ICSDocument : NSObject {

	ICSCalendar* _calendar;

}
+(int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1 ;
+(void)suppressParserSyntaxErrorLogging;
-(id)calendar;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validate:(id*)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)ICSDataWithOptions:(unsigned long long)arg1 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)ICSCompressedDataWithOptions:(unsigned long long)arg1 ;
-(id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)ICSChecksumStringForVersion:(int)arg1 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)ICSChecksumForVersion:(int)arg1 ;
@end

