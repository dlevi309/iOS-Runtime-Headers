/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_endpoint_fallback.h>

@protocol OS_nw_interface;
@class NWConcrete_nw_endpoint_handler, NSObject, NSString;

@interface NWConcrete_nw_endpoint_fallback : NSObject <OS_nw_endpoint_fallback> {

	unsigned long long fallback_usage_cap;
	unsigned long long fallback_cap_interval;
	unsigned long long fallback_timeout_nanos;
	NWConcrete_nw_endpoint_handler* primary_child;
	NWConcrete_nw_endpoint_handler* fallback_child;
	int result;
	NSObject*<OS_nw_interface> primary_interface;
	NSObject*<OS_nw_interface> fallback_interface;
	void* fallback_timer;
	void* post_transport_timer;
	void* usage_cap_timer;
	unsigned long long fallback_timer_start;
	unsigned fallback_disposition;
	unsigned received_primary_cancelled_error : 1;
	unsigned weak_fallback : 1;
	unsigned no_fallback_timer : 1;
	unsigned fallback_is_forced : 1;
	unsigned fallback_based_on_interface_type : 1;
	unsigned started_fallback : 1;
	unsigned primary_child_in_progress : 1;
	unsigned fallback_child_in_progress : 1;
	unsigned primary_child_indefinite_failed : 1;
	unsigned fallback_child_indefinite_failed : 1;
	unsigned fallback_is_cellular : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)applyWithHandler:(id)arg1 toChildren:(/*^block*/id)arg2 ;
-(void)startWithHandler:(id)arg1 ;
-(void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2 ;
-(void)updatePathWithHandler:(id)arg1 ;
@end

