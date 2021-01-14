/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_advertise_descriptor.h>

@protocol OS_nw_txt_record;
@class NSObject, NSString;

@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor> {

	char* name;
	char* type;
	char* domain;
	NSObject*<OS_nw_txt_record> txt_record;
	unsigned no_auto_rename : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
@end

