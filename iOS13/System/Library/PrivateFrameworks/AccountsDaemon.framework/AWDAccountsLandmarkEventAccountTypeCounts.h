/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAccountsLandmarkEventAccountTypeCounts : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _accountCount;
	NSString* _accountType;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountType; 
@property (nonatomic,retain) NSString * accountType;                    //@synthesize accountType=_accountType - In the implementation block
@property (assign,nonatomic) BOOL hasAccountCount; 
@property (assign,nonatomic) unsigned accountCount;                     //@synthesize accountCount=_accountCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)accountType;
-(void)setAccountType:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasAccountType;
-(void)setAccountCount:(unsigned)arg1 ;
-(void)setHasAccountCount:(BOOL)arg1 ;
-(BOOL)hasAccountCount;
-(unsigned)accountCount;
@end

