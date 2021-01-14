/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying> {

	NSMutableArray* _paymentPasses;
	NPKProtoStandaloneResponseHeader* _responseHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneResponseHeader * responseHeader;              //@synthesize responseHeader=_responseHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentPasses;                                 //@synthesize paymentPasses=_paymentPasses - In the implementation block
+(Class)paymentPassesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)paymentPasses;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setResponseHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
-(NPKProtoStandaloneResponseHeader *)responseHeader;
-(void)addPaymentPasses:(id)arg1 ;
-(unsigned long long)paymentPassesCount;
-(void)clearPaymentPasses;
-(id)paymentPassesAtIndex:(unsigned long long)arg1 ;
-(void)setPaymentPasses:(NSMutableArray *)arg1 ;
@end

