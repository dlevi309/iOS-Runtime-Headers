/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)endpointWithAddress:(const sockaddr*)arg1 ;
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
-(NSString *)addressStringNoPort;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)ethernetAddress;
-(const sockaddr*)address;
-(NSData *)addressData;
-(unsigned long long)addressFamily;
-(NSString *)addressString;
@end

