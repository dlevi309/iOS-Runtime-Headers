/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id)initWithName:(const char*)arg1 type:(const char*)arg2 domain:(const char*)arg3 ;
@end

