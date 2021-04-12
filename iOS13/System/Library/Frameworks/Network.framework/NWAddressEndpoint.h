/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <Network/NWHostEndpoint.h>

@class NSString, NSData;

@interface NWAddressEndpoint : NWHostEndpoint

@property (nonatomic,readonly) NSString * addressString; 
@property (nonatomic,readonly) NSString * addressStringNoPort; 
@property (nonatomic,readonly) NSData * addressData; 
@property (nonatomic,readonly) const sockaddr* address; 
@property (nonatomic,readonly) unsigned long long addressFamily; 
+(unsigned)endpointType;
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
+(id)endpointWithAddress:(const sockaddr*)arg1 ;
-(const sockaddr*)address;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)ethernetAddress;
-(NSData *)addressData;
-(NSString *)addressString;
-(NSString *)addressStringNoPort;
-(unsigned long long)addressFamily;
@end

