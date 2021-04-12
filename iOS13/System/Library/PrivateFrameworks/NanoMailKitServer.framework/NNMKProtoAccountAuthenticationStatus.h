/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)requestTime;
-(void)setRequestTime:(double)arg1 ;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)hasRequestTime;
-(NSMutableArray *)accountsStatus;
-(void)addAccountsStatus:(id)arg1 ;
-(unsigned long long)accountsStatusCount;
-(void)clearAccountsStatus;
-(id)accountsStatusAtIndex:(unsigned long long)arg1 ;
-(void)setAccountsStatus:(NSMutableArray *)arg1 ;
@end

