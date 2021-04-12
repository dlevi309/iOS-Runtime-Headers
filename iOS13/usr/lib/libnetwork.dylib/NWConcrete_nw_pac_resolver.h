/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_pac_resolver.h>

@protocol OS_nw_context;
@class NSObject, NSString;

@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver> {

	/*^block*/id result_block;
	NSObject*<OS_nw_context> context;
	CFURLRef endpointURL;
	CFURLRef pacURL;
	CFStringRef pacScript;
	CFDataRef auditToken;
	CFStringRef bundleIdentifier;
	char logging_id_str[75];
	unsigned is_dry_run : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

