/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_unique_connection.h>

@protocol OS_nw_endpoint;
@class NSObject, NWConcrete_nw_connection, NSString;

@interface NWConcrete_nw_unique_connection : NSObject <OS_nw_unique_connection> {

	NSObject*<OS_nw_endpoint> endpoint;
	char service[436];
	unsigned long long receivedSequenceNumber;
	unsigned long long uniqueID;
	unsigned char uuid[16];
	NWConcrete_nw_connection* connection;
	int dupedSocketFD;
	unsigned isIncoming : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

