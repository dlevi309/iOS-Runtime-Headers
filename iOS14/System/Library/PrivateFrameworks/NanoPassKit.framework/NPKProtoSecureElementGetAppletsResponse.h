/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying> {

	SCD_Struct_NP8* _activationStates;
	SCD_Struct_NP8* _lifecycleStates;
	NSMutableArray* _appletsBytes;
	NSMutableArray* _cardAIDs;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                            //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSMutableArray * cardAIDs;                               //@synthesize cardAIDs=_cardAIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long lifecycleStatesCount; 
@property (nonatomic,readonly) unsigned* lifecycleStates; 
@property (nonatomic,readonly) unsigned long long activationStatesCount; 
@property (nonatomic,readonly) unsigned* activationStates; 
@property (nonatomic,retain) NSMutableArray * appletsBytes;                           //@synthesize appletsBytes=_appletsBytes - In the implementation block
+(Class)cardAIDsType;
+(Class)appletsBytesType;
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)addCardAIDs:(id)arg1 ;
-(unsigned long long)cardAIDsCount;
-(void)clearCardAIDs;
-(id)cardAIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cardAIDs;
-(void)setCardAIDs:(NSMutableArray *)arg1 ;
-(void)addAppletsBytes:(id)arg1 ;
-(unsigned long long)lifecycleStatesCount;
-(void)clearLifecycleStates;
-(unsigned)lifecycleStatesAtIndex:(unsigned long long)arg1 ;
-(void)addLifecycleStates:(unsigned)arg1 ;
-(unsigned long long)activationStatesCount;
-(void)clearActivationStates;
-(unsigned)activationStatesAtIndex:(unsigned long long)arg1 ;
-(void)addActivationStates:(unsigned)arg1 ;
-(unsigned long long)appletsBytesCount;
-(void)clearAppletsBytes;
-(id)appletsBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned*)lifecycleStates;
-(void)setLifecycleStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)activationStates;
-(void)setActivationStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)appletsBytes;
-(void)setAppletsBytes:(NSMutableArray *)arg1 ;
@end

