/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface NPKProtoRemoveExpressPassWithUniqueIdentifierResponse : PBCodable <NSCopying> {

	NSData* _actualExpressPassInformation;
	NSMutableArray* _currentExpressPassesInformations;
	BOOL _pending;
	BOOL _success;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                                   //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasActualExpressPassInformation; 
@property (nonatomic,retain) NSData * actualExpressPassInformation;                          //@synthesize actualExpressPassInformation=_actualExpressPassInformation - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentExpressPassesInformations;              //@synthesize currentExpressPassesInformations=_currentExpressPassesInformations - In the implementation block
+(Class)currentExpressPassesInformationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)addCurrentExpressPassesInformation:(id)arg1 ;
-(void)setActualExpressPassInformation:(NSData *)arg1 ;
-(unsigned long long)currentExpressPassesInformationsCount;
-(void)clearCurrentExpressPassesInformations;
-(id)currentExpressPassesInformationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActualExpressPassInformation;
-(NSData *)actualExpressPassInformation;
-(NSMutableArray *)currentExpressPassesInformations;
-(void)setCurrentExpressPassesInformations:(NSMutableArray *)arg1 ;
@end

