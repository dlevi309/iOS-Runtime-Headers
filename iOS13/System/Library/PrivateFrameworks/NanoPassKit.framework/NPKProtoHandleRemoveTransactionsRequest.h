/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying> {

	NSMutableArray* _identifiers;
	NSMutableArray* _passIDs;

}

@property (nonatomic,retain) NSMutableArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * passIDs;                  //@synthesize passIDs=_passIDs - In the implementation block
+(Class)identifiersType;
+(Class)passIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)identifiers;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(unsigned long long)identifiersCount;
-(void)clearIdentifiers;
-(void)addIdentifiers:(id)arg1 ;
-(id)identifiersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passIDs;
-(void)setPassIDs:(NSMutableArray *)arg1 ;
-(void)addPassIDs:(id)arg1 ;
-(unsigned long long)passIDsCount;
-(void)clearPassIDs;
-(id)passIDsAtIndex:(unsigned long long)arg1 ;
@end

