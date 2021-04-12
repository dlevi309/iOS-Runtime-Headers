/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)upgradeStatus;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(NPKProtoPass *)pass;
-(void)setPass:(NPKProtoPass *)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(NSData *)errorData;
-(BOOL)hasPass;
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

