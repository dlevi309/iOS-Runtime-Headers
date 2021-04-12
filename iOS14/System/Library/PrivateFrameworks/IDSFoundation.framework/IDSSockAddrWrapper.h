/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSSockAddrWrapper : NSObject <NSCopying> {

	sockaddr_storage _sa;

}

@property (nonatomic,readonly) const sockaddr* sa; 
@property (nonatomic,readonly) const sockaddr_in* sa4; 
@property (nonatomic,readonly) const sockaddr_in6* sa6; 
@property (nonatomic,readonly) unsigned short saPortHostOrder; 
+(id)wrapperWithSockAddr:(const sockaddr*)arg1 ;
+(id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 ;
+(id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2 ;
+(id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3 ;
-(unsigned short)saPortHostOrder;
-(const sockaddr*)sa;
-(id)initWithSockAddr:(const sockaddr*)arg1 ;
-(BOOL)isEqualToWrapper:(id)arg1 ;
-(BOOL)isEqualToSockAddr:(const sockaddr*)arg1 ;
-(id)ipData;
-(id)description;
-(const sockaddr_in*)sa4;
-(id)ipString;
-(unsigned long long)hash;
-(void)copySockAddr:(sockaddr*)arg1 ;
-(const sockaddr_in6*)sa6;
-(void)updateLocalPort:(unsigned short)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

