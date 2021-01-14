/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@class ICSCalendar;

@interface ICSDocument : NSObject {

	ICSCalendar* _calendar;

}
+(int)ICSChecksumVersionSpecifiedInOptions:(unsigned long long)arg1 ;
+(void)suppressParserSyntaxErrorLogging;
-(BOOL)validate:(id*)arg1 ;
-(id)calendar;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)ICSDataWithOptions:(unsigned long long)arg1 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithCalendar:(id)arg1 ;
-(id)ICSChecksumStringForVersion:(int)arg1 ;
-(id)initWithICSString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)ICSCompressedDataWithOptions:(unsigned long long)arg1 ;
-(id)ICSChecksumForVersion:(int)arg1 ;
@end

