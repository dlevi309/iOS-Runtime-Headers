/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NPKProtoSetBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying> {

	NSData* _balanceBytes;
	NSData* _balanceReminderBytes;
	NSString* _uniqueID;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceBytes; 
@property (nonatomic,retain) NSData * balanceBytes;                       //@synthesize balanceBytes=_balanceBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceReminderBytes; 
@property (nonatomic,retain) NSData * balanceReminderBytes;               //@synthesize balanceReminderBytes=_balanceReminderBytes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)hasUniqueID;
-(void)setBalanceReminderBytes:(NSData *)arg1 ;
-(BOOL)hasBalanceReminderBytes;
-(NSData *)balanceReminderBytes;
-(NSData *)balanceBytes;
-(void)setBalanceBytes:(NSData *)arg1 ;
-(BOOL)hasBalanceBytes;
@end

