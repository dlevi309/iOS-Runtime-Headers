/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/ICSInputByteStream.h>

@class NSData, NSString;

@interface ICSInputData : NSObject <ICSInputByteStream> {

	NSData* _data;
	unsigned long long _cursor;
	char* _rawData;
	unsigned long long _length;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)eos;
-(char)read;
-(id)initWithData:(id)arg1 ;
@end

