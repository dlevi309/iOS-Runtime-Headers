/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying> {

	NSMutableArray* _cardAIDs;

}

@property (nonatomic,retain) NSMutableArray * cardAIDs;              //@synthesize cardAIDs=_cardAIDs - In the implementation block
+(Class)cardAIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addCardAIDs:(id)arg1 ;
-(unsigned long long)cardAIDsCount;
-(void)clearCardAIDs;
-(id)cardAIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cardAIDs;
-(void)setCardAIDs:(NSMutableArray *)arg1 ;
@end

