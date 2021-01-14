/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_group_descriptor.h>

@protocol OS_nw_array, OS_nw_endpoint, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_group_descriptor : NSObject <OS_nw_group_descriptor> {

	int type;
	NSObject*<OS_nw_array> members;
	NSObject*<OS_nw_endpoint> specific_source;
	NSObject*<OS_dispatch_queue> member_change_queue;
	/*^block*/id member_change_handler;
	unsigned disable_unicast_traffic : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithType:(int)arg1 member:(id)arg2 ;
-(NSString *)description;
-(void)dealloc;
@end

