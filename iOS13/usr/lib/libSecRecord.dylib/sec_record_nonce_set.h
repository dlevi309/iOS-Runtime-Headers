/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

