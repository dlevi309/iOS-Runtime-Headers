/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer {

	unsigned long long _begin;
	unsigned long long _end;
	unsigned long long _length;
	unsigned long long _readBytes;
	unsigned char _encoded[4];
	BOOL _beginComplete;
	BOOL _dataComplete;
	BOOL _validLength;
	BOOL _lineComplete;
	BOOL _passthrough;

}
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

