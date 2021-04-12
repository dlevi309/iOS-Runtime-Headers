/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoHandleValueAddedServiceTransactionsRequest : PBRequest <NSCopying> {

	NSMutableArray* _transactionPassIDs;
	NSMutableArray* _transactionsBytes;

}

@property (nonatomic,retain) NSMutableArray * transactionsBytes;               //@synthesize transactionsBytes=_transactionsBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionPassIDs;              //@synthesize transactionPassIDs=_transactionPassIDs - In the implementation block
+(Class)transactionsBytesType;
+(Class)transactionPassIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addTransactionsBytes:(id)arg1 ;
-(void)addTransactionPassIDs:(id)arg1 ;
-(unsigned long long)transactionsBytesCount;
-(void)clearTransactionsBytes;
-(id)transactionsBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionPassIDsCount;
-(void)clearTransactionPassIDs;
-(id)transactionPassIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transactionsBytes;
-(void)setTransactionsBytes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transactionPassIDs;
-(void)setTransactionPassIDs:(NSMutableArray *)arg1 ;
@end

