/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying> {

	double _requestTime;
	NSMutableArray* _accountsStatus;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,retain) NSMutableArray * accountsStatus;              //@synthesize accountsStatus=_accountsStatus - In the implementation block
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime;                           //@synthesize requestTime=_requestTime - In the implementation block
+(Class)accountsStatusType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)requestTime;
-(unsigned long long)hash;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestTime:(double)arg1 ;
-(BOOL)hasRequestTime;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)accountsStatus;
-(void)addAccountsStatus:(id)arg1 ;
-(unsigned long long)accountsStatusCount;
-(void)clearAccountsStatus;
-(id)accountsStatusAtIndex:(unsigned long long)arg1 ;
-(void)setAccountsStatus:(NSMutableArray *)arg1 ;
@end

