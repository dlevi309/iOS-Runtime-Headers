/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSAuditToken, NSString;

@interface STActivityAttribution : NSObject <NSSecureCoding, BSDescriptionProviding> {

	int _clientProvidedPID;
	BSAuditToken* _bsAuditToken;

}

@property (nonatomic,readonly) int clientProvidedPID;                         //@synthesize clientProvidedPID=_clientProvidedPID - In the implementation block
@property (nonatomic,copy,readonly) BSAuditToken * bsAuditToken;              //@synthesize bsAuditToken=_bsAuditToken - In the implementation block
@property (nonatomic,readonly) SCD_Struct_ST1 auditToken; 
@property (nonatomic,readonly) int pid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)attributionWithPID:(int)arg1 ;
+(id)attributionWithAuditToken:(SCD_Struct_ST1)arg1 ;
-(id)succinctDescription;
-(int)clientProvidedPID;
-(int)pid;
-(id)initWithPID:(int)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_ST1)arg1 ;
-(SCD_Struct_ST1)auditToken;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BSAuditToken *)bsAuditToken;
-(id)initWithBSAuditToken:(id)arg1 clientProvidedPID:(int)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
@end

