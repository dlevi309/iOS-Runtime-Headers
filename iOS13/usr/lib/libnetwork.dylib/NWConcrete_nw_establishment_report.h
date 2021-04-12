/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_establishment_report.h>

@protocol OS_nw_endpoint, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_establishment_report : NSObject <OS_nw_establishment_report> {

	unsigned long long attempt_started_after_milliseconds;
	unsigned long long duration_milliseconds;
	unsigned long long resolution_started_after_milliseconds;
	unsigned long long flow_started_after_milliseconds;
	NSObject*<OS_nw_endpoint> proxy_endpoint;
	NSObject*<OS_nw_array> protocol_reports;
	nw_establishment_resolution_report* resolution_reports;
	unsigned resolution_report_count;
	unsigned previous_attempt_count;
	unsigned proxy_configured : 1;
	unsigned used_proxy : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

