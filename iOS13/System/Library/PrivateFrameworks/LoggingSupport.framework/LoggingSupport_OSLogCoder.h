/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_Lo28* _fmt_cmd;
	os_trace_blob_s* _ob;
	os_trace_blob_s* _ob_pub;
	os_trace_blob_s* _ob_priv;
	unsigned char _privacy_level;
	os_trace_blob_s* _ob_mask;
	char _maskbuf[128];
	unsigned long long _maxsz;
	unsigned short _written;
	unsigned short _offset;
	BOOL _truncated;
	BOOL _initialized;
	BOOL _mask;

}
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)_initBlob;
@end

