/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NPKProtoHandleBalanceChangeRequest : PBRequest <NSCopying> {

	NSMutableArray* _balanceBytes;
	NSString* _passID;

}

@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                          //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * balanceBytes;              //@synthesize balanceBytes=_balanceBytes - In the implementation block
+(Class)balanceBytesType;
-(id)dictionaryRepresentation;
-(NSString *)passID;
-(BOOL)hasPassID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addBalanceBytes:(id)arg1 ;
-(unsigned long long)balanceBytesCount;
-(void)clearBalanceBytes;
-(id)balanceBytesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)balanceBytes;
-(void)setBalanceBytes:(NSMutableArray *)arg1 ;
@end

