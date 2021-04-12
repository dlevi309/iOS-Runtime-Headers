/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_authentication_challenge.h>

@class NWConcrete_nw_authentication_protection_space, NSString;

@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge> {

	NWConcrete_nw_authentication_protection_space* protection_space;
	void* http_message;
	int type;
	unsigned attempt_count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
@end

