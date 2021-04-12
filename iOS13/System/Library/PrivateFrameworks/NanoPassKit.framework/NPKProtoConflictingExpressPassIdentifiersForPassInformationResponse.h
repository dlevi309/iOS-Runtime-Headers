/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

