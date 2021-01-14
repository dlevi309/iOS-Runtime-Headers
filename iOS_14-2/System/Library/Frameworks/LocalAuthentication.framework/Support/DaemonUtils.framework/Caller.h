/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/


#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSXPCConnection, NSData;

@interface Caller : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,readonly) int asid; 
@property (nonatomic,readonly) SCD_Struct_Ca0 auditToken; 
@property (nonatomic,readonly) NSData * auditTokenData; 
+(id)current;
-(int)pid;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)isEqualToAuditTokenData:(id)arg1 ;
-(SCD_Struct_Ca0)auditToken;
-(unsigned)euid;
-(id)description;
-(NSXPCConnection *)connection;
-(unsigned long long)hash;
-(NSData *)auditTokenData;
-(int)asid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAuditToken:(SCD_Struct_Ca0)arg1 ;
@end

