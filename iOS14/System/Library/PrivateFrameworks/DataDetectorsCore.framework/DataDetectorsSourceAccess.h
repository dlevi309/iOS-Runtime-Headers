/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DataDetectorsSourceAccessProtocol.h>

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {

	SCD_Struct_Da4 _auditToken;
	int _clientpid;
	unsigned _clientuid;
	BOOL _privacyUserReadEntitled;
	unsigned char _privacyUserReadEntitlementChecked;
	BOOL _privacyUserWriteEntitled;
	unsigned char _privacyUserWriteEntitlementChecked;
	BOOL _privacySystemWriteEntitled;
	unsigned char _privacySystemWriteEntitlementChecked;

}

@property (assign) SCD_Struct_Da4 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int processIdentifier;                  //@synthesize clientpid=_clientpid - In the implementation block
@property (assign) unsigned userIdentifier;                //@synthesize clientuid=_clientuid - In the implementation block
-(unsigned)userIdentifier;
-(int)processIdentifier;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)setAuditToken:(SCD_Struct_Da4)arg1 ;
-(SCD_Struct_Da4)auditToken;
-(void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(BOOL)privacyUserReadEntitled;
-(BOOL)privacyUserWriteEntitled;
-(BOOL)privacySystemWriteEntitled;
-(id)fileHandleForSourceRead:(int)arg1 resourceType:(unsigned long long)arg2 ;
-(BOOL)clientCanWriteSource:(int)arg1 ;
-(BOOL)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3 ;
@end

