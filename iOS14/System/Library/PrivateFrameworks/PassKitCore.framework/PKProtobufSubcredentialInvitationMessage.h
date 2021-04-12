/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufSubcredentialInvitationMessage : PBCodable <NSCopying> {

	NSString* _dataString;
	NSString* _phoneInvitation;
	int _status;
	NSString* _uniqueIdentifier;
	unsigned _version;
	NSString* _watchInvitation;
	SCD_Struct_PK13 _has;

}

@property (assign,nonatomic) unsigned version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneInvitation; 
@property (nonatomic,retain) NSString * phoneInvitation;               //@synthesize phoneInvitation=_phoneInvitation - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasDataString; 
@property (nonatomic,retain) NSString * dataString;                    //@synthesize dataString=_dataString - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchInvitation; 
@property (nonatomic,retain) NSString * watchInvitation;               //@synthesize watchInvitation=_watchInvitation - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(NSString *)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)dataString;
-(void)setPhoneInvitation:(NSString *)arg1 ;
-(void)setDataString:(NSString *)arg1 ;
-(void)setWatchInvitation:(NSString *)arg1 ;
-(BOOL)hasPhoneInvitation;
-(BOOL)hasDataString;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWatchInvitation;
-(NSString *)phoneInvitation;
-(NSString *)watchInvitation;
-(int)status;
@end

