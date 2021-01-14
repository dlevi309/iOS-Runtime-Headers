/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoFamilyMembersResponse : PBCodable <NSCopying> {

	NSMutableArray* _familyMembers;
	BOOL _success;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSMutableArray * familyMembers;              //@synthesize familyMembers=_familyMembers - In the implementation block
+(Class)familyMembersType;
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)setFamilyMembers:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)familyMembers;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addFamilyMembers:(id)arg1 ;
-(unsigned long long)familyMembersCount;
-(void)clearFamilyMembers;
-(id)familyMembersAtIndex:(unsigned long long)arg1 ;
@end

