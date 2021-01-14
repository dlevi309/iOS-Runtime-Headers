/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying> {

	NSString* _passID;
	NSMutableArray* _paymentApplicationAIDs;

}

@property (nonatomic,retain) NSString * passID;                                    //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentApplicationAIDs;              //@synthesize paymentApplicationAIDs=_paymentApplicationAIDs - In the implementation block
+(Class)paymentApplicationAIDsType;
-(id)dictionaryRepresentation;
-(NSString *)passID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPaymentApplicationAIDs:(id)arg1 ;
-(unsigned long long)paymentApplicationAIDsCount;
-(void)clearPaymentApplicationAIDs;
-(id)paymentApplicationAIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)paymentApplicationAIDs;
-(void)setPaymentApplicationAIDs:(NSMutableArray *)arg1 ;
@end

