/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoBalanceReminderForBalanceAndPassResponse : PBCodable <NSCopying> {

	NSData* _balanceReminderBytes;
	NSData* _errorData;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceReminderBytes; 
@property (nonatomic,retain) NSData * balanceReminderBytes;               //@synthesize balanceReminderBytes=_balanceReminderBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                          //@synthesize errorData=_errorData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(NSData *)errorData;
-(void)setBalanceReminderBytes:(NSData *)arg1 ;
-(BOOL)hasBalanceReminderBytes;
-(NSData *)balanceReminderBytes;
@end

