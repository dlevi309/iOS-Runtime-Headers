/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_browse_result.h>

@protocol OS_nw_endpoint, OS_nw_array, OS_nw_txt_record;
@class NSObject, NSString;

@interface NWConcrete_nw_browse_result : NSObject <OS_nw_browse_result> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_array> interfaces;
	NSObject*<OS_nw_txt_record> txt_record;
	char* description;
	char* logging_description;
	os_unfair_lock_s lock;
	unsigned immutable : 1;
	unsigned discovered_from_path : 1;
	unsigned __pad_bits : 6;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

