/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)passID;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)hasPassID;
-(void)addBalanceBytes:(id)arg1 ;
-(unsigned long long)balanceBytesCount;
-(void)clearBalanceBytes;
-(id)balanceBytesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)balanceBytes;
-(void)setBalanceBytes:(NSMutableArray *)arg1 ;
@end

