/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/iCalendar-Structs.h>
#import <libobjc.A.dylib/ICSAppendable.h>

@class NSMutableData, NSString;

@interface ICSZStringWriter : NSObject <ICSAppendable> {

	z_stream_s* _strm;
	NSMutableData* _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendString:(id)arg1 ;
-(id)init;
-(void)appendFormat:(id)arg1 ;
-(NSString *)description;
-(id)zResult;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 andFlush:(BOOL)arg3 ;
@end

