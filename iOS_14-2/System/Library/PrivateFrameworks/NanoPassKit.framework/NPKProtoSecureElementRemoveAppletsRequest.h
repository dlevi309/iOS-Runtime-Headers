/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCardAIDs:(id)arg1 ;
-(unsigned long long)cardAIDsCount;
-(void)clearCardAIDs;
-(id)cardAIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cardAIDs;
-(void)setCardAIDs:(NSMutableArray *)arg1 ;
@end

