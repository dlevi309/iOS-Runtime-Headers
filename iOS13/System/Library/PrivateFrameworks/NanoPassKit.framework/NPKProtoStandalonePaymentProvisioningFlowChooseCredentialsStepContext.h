/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying> {

	NSMutableArray* _credentials;
	NSMutableArray* _remoteCredentials;
	BOOL _allowsManualEntry;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NSMutableArray * remoteCredentials;              //@synthesize remoteCredentials=_remoteCredentials - In the implementation block
@property (nonatomic,retain) NSMutableArray * credentials;                    //@synthesize credentials=_credentials - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsManualEntry; 
@property (assign,nonatomic) BOOL allowsManualEntry;                          //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
+(Class)remoteCredentialsType;
+(Class)credentialsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCredentials:(NSMutableArray *)arg1 ;
-(NSMutableArray *)credentials;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(BOOL)allowsManualEntry;
-(void)addCredentials:(id)arg1 ;
-(void)addRemoteCredentials:(id)arg1 ;
-(unsigned long long)remoteCredentialsCount;
-(void)clearRemoteCredentials;
-(id)remoteCredentialsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)credentialsCount;
-(void)clearCredentials;
-(id)credentialsAtIndex:(unsigned long long)arg1 ;
-(void)setHasAllowsManualEntry:(BOOL)arg1 ;
-(BOOL)hasAllowsManualEntry;
-(NSMutableArray *)remoteCredentials;
-(void)setRemoteCredentials:(NSMutableArray *)arg1 ;
@end

