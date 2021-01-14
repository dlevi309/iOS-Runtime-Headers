/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libSecRecord.dylib
*/

#import <libobjc.A.dylib/OS_sec_record_nonce_set.h>

@class NSString;

@interface sec_record_nonce_set : NSObject <OS_sec_record_nonce_set> {

	unsigned long long replay_window_size;
	unsigned long long bitmap;
	unsigned long long max_nonce;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)should_discard:(unsigned long long)arg1 ;
-(void)add_nonce:(unsigned long long)arg1 ;
@end

