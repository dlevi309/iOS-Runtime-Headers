/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 andFlush:(BOOL)arg3 ;
-(id)zResult;
@end

