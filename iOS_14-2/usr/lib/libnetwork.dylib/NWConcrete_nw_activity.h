/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_activity.h>

@class NSString;

@interface NWConcrete_nw_activity : NSObject <OS_nw_activity> {

	unsigned char token[16];
	unsigned long long investigation_identifier;
	unsigned long long start_time;
	unsigned long long end_time;
	NWConcrete_nw_activity* parent;
	os_unfair_lock_s lock;
	os_unfair_lock_s description_lock;
	unsigned label;
	unsigned domain;
	int underlying_error_domain;
	int underlying_error_code;
	int reporting_strategy;
	int completion_reason;
	NSString* description;
	unsigned is_retry : 1;
	unsigned is_lightweight : 1;
	unsigned activated : 1;
	unsigned completed : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

