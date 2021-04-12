/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned label;
	unsigned domain;
	int reporting_strategy;
	int completion_reason;
	unsigned is_retry : 1;
	unsigned is_lightweight : 1;
	unsigned activated : 1;
	unsigned completed : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
-(id)initWithDomain:(unsigned)arg1 label:(unsigned)arg2 ;
-(id)initWithToken:(unsigned char)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
@end

