/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_browse_descriptor.h>

@protocol OS_dispatch_data;
@class NSObject, NSString;

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {

	int type;
	char* bonjour_type;
	char* bonjour_domain;
	char* description;
	char* logging_description;
	NSObject*<OS_dispatch_data> custom_data;
	/*^block*/id browse_block;
	unsigned include_txt_record : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

