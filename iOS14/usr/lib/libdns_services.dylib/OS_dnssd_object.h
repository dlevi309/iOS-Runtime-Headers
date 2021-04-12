/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libdns_services.dylib
*/

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_dnssd_object.h>

@protocol OS_dnssd_object <NSObject>
@end


@class NSString;

@interface OS_dnssd_object : OS_object <OS_dnssd_object>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

