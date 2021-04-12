/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBPBDisplayItem;

@interface SBPBAppLayout : PBCodable <NSCopying> {

	int _environment;
	int _layoutConfiguration;
	SBPBDisplayItem* _primaryDisplayItem;
	SBPBDisplayItem* _secondaryDisplayItem;
	int _secondaryDisplayItemRole;
	BOOL _hidden;
	SCD_Struct_SB38 _has;

}

@property (assign,nonatomic) int layoutConfiguration;                             //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryDisplayItem; 
@property (nonatomic,retain) SBPBDisplayItem * primaryDisplayItem;                //@synthesize primaryDisplayItem=_primaryDisplayItem - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryDisplayItemRole; 
@property (assign,nonatomic) int secondaryDisplayItemRole;                        //@synthesize secondaryDisplayItemRole=_secondaryDisplayItemRole - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondaryDisplayItem; 
@property (nonatomic,retain) SBPBDisplayItem * secondaryDisplayItem;              //@synthesize secondaryDisplayItem=_secondaryDisplayItem - In the implementation block
@property (assign,nonatomic) int environment;                                     //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                         //@synthesize hidden=_hidden - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)environment;
-(void)setEnvironment:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(int)layoutConfiguration;
-(SBPBDisplayItem *)primaryDisplayItem;
-(BOOL)hasSecondaryDisplayItem;
-(SBPBDisplayItem *)secondaryDisplayItem;
-(int)secondaryDisplayItemRole;
-(void)setLayoutConfiguration:(int)arg1 ;
-(void)setPrimaryDisplayItem:(SBPBDisplayItem *)arg1 ;
-(void)setSecondaryDisplayItem:(SBPBDisplayItem *)arg1 ;
-(void)setSecondaryDisplayItemRole:(int)arg1 ;
-(id)layoutConfigurationAsString:(int)arg1 ;
-(int)StringAsLayoutConfiguration:(id)arg1 ;
-(BOOL)hasPrimaryDisplayItem;
-(void)setHasSecondaryDisplayItemRole:(BOOL)arg1 ;
-(BOOL)hasSecondaryDisplayItemRole;
-(id)secondaryDisplayItemRoleAsString:(int)arg1 ;
-(int)StringAsSecondaryDisplayItemRole:(id)arg1 ;
-(id)environmentAsString:(int)arg1 ;
-(int)StringAsEnvironment:(id)arg1 ;
@end

