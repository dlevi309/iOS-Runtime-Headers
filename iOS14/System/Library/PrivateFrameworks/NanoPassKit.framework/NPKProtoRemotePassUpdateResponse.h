/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NPKProtoPass;

@interface NPKProtoRemotePassUpdateResponse : PBCodable <NSCopying> {

	NSData* _errorData;
	NSMutableArray* _expressPassInformations;
	NPKProtoPass* _pass;
	int _upgradeStatus;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                          //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasPass; 
@property (nonatomic,retain) NPKProtoPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                                    //@synthesize errorData=_errorData - In the implementation block
@property (assign,nonatomic) BOOL hasUpgradeStatus; 
@property (assign,nonatomic) int upgradeStatus;                                     //@synthesize upgradeStatus=_upgradeStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * expressPassInformations;              //@synthesize expressPassInformations=_expressPassInformations - In the implementation block
+(Class)expressPassInformationType;
-(id)dictionaryRepresentation;
-(void)setPass:(NPKProtoPass *)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(NPKProtoPass *)pass;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)upgradeStatus;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(NSMutableArray *)expressPassInformations;
-(void)addExpressPassInformation:(id)arg1 ;
-(unsigned long long)expressPassInformationsCount;
-(void)clearExpressPassInformations;
-(id)expressPassInformationAtIndex:(unsigned long long)arg1 ;
-(void)setUpgradeStatus:(int)arg1 ;
-(void)setHasUpgradeStatus:(BOOL)arg1 ;
-(BOOL)hasUpgradeStatus;
-(id)upgradeStatusAsString:(int)arg1 ;
-(int)StringAsUpgradeStatus:(id)arg1 ;
-(void)setExpressPassInformations:(NSMutableArray *)arg1 ;
@end

