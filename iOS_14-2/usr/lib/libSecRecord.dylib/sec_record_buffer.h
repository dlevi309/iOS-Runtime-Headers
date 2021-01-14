/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libSecRecord.dylib
*/

#import <libobjc.A.dylib/OS_sec_record_buffer.h>

@class NSString;

@interface sec_record_buffer : NSObject <OS_sec_record_buffer> {

	unsigned long long header_size;
	char* header;
	unsigned long long payload_size;
	char* payload;
	unsigned char tag[32];
	unsigned long long tag_size;
	unsigned finalized : 1;
	unsigned owned : 1;
	unsigned __pad_bits : 6;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init:(unsigned long long)arg1 payload_size:(unsigned long long)arg2 tag_size:(unsigned long long)arg3 ;
-(id)initFromBytes:(char*)arg1 header_size:(unsigned long long)arg2 payload:(char*)arg3 payload_size:(unsigned long long)arg4 tag_size:(unsigned long long)arg5 ;
@end

