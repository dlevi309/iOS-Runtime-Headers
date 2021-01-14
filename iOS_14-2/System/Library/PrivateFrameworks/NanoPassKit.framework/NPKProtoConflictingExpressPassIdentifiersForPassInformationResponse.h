/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable <NSCopying> {

	NSMutableArray* _conflictingExpressPassIdentifiers;
	NSMutableArray* _conflictingReferenceExpressPassIdentifiers;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                                             //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictingExpressPassIdentifiers;                       //@synthesize conflictingExpressPassIdentifiers=_conflictingExpressPassIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictingReferenceExpressPassIdentifiers;              //@synthesize conflictingReferenceExpressPassIdentifiers=_conflictingReferenceExpressPassIdentifiers - In the implementation block
+(Class)conflictingExpressPassIdentifiersType;
+(Class)conflictingReferenceExpressPassIdentifiersType;
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
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)addConflictingExpressPassIdentifiers:(id)arg1 ;
-(void)addConflictingReferenceExpressPassIdentifiers:(id)arg1 ;
-(unsigned long long)conflictingExpressPassIdentifiersCount;
-(void)clearConflictingExpressPassIdentifiers;
-(id)conflictingExpressPassIdentifiersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)conflictingReferenceExpressPassIdentifiersCount;
-(void)clearConflictingReferenceExpressPassIdentifiers;
-(id)conflictingReferenceExpressPassIdentifiersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)conflictingExpressPassIdentifiers;
-(void)setConflictingExpressPassIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)conflictingReferenceExpressPassIdentifiers;
-(void)setConflictingReferenceExpressPassIdentifiers:(NSMutableArray *)arg1 ;
@end

