/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/iCalendar-Structs.h>
#import <libobjc.A.dylib/ICSInputByteStream.h>

@class NSData, NSString;

@interface ICSCompressedInputStream : NSObject <ICSInputByteStream> {

	SCD_Struct_IC1* underStream;
	NSData* rawData;
	void* buffer;
	unsigned long long bufPos;
	unsigned long long bufLen;
	BOOL finalBlock;
	BOOL didFinalize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)eos;
-(char)read;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
@end

