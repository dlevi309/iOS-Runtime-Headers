/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString;

@interface ClientIdentity : NSObject {

	int _pid;
	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _codeSigningIdentity;
	SCD_Struct_Cl4 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_Cl4 auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeSigningIdentity;              //@synthesize codeSigningIdentity=_codeSigningIdentity - In the implementation block
@property (nonatomic,readonly) int pid;                                          //@synthesize pid=_pid - In the implementation block
-(int)pid;
-(NSString *)clientName;
-(NSString *)bundleIdentifier;
-(id)initWithAuditToken:(SCD_Struct_Cl4)arg1 ;
-(SCD_Struct_Cl4)auditToken;
-(id)description;
-(NSString *)codeSigningIdentity;
@end

