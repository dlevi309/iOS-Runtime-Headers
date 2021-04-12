/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/system/libsystem_trace.dylib
*/

#import <libsystem_trace.dylib/libsystem_trace.dylib-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@protocol OSLogCoder
@required
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end


@interface OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_OS0* _fmt_cmd;
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
-(void)_initBlob;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

