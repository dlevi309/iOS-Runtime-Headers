/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)appendData:(id)arg1 ;
-(void)done;
@end

