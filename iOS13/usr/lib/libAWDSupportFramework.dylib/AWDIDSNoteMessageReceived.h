/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSNoteMessageReceived : PBCodable <NSCopying> {

	unsigned long long _localtimedelta;
	unsigned long long _servertimestamp;
	unsigned long long _timestamp;
	int _accountType;
	NSString* _serviceIdentifier;
	BOOL _fromStorage;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAccountType; 
@property (assign,nonatomic) int accountType;                                 //@synthesize accountType=_accountType - In the implementation block
@property (assign,nonatomic) BOOL hasFromStorage; 
@property (assign,nonatomic) BOOL fromStorage;                                //@synthesize fromStorage=_fromStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasServertimestamp; 
@property (assign,nonatomic) unsigned long long servertimestamp;              //@synthesize servertimestamp=_servertimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLocaltimedelta; 
@property (assign,nonatomic) unsigned long long localtimedelta;               //@synthesize localtimedelta=_localtimedelta - In the implementation block
-(void)dealloc;
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
-(int)accountType;
-(void)setAccountType:(int)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setFromStorage:(BOOL)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)hasAccountType;
-(void)setHasAccountType:(BOOL)arg1 ;
-(BOOL)hasServiceIdentifier;
-(void)setHasFromStorage:(BOOL)arg1 ;
-(BOOL)hasFromStorage;
-(void)setServertimestamp:(unsigned long long)arg1 ;
-(void)setHasServertimestamp:(BOOL)arg1 ;
-(BOOL)hasServertimestamp;
-(void)setLocaltimedelta:(unsigned long long)arg1 ;
-(void)setHasLocaltimedelta:(BOOL)arg1 ;
-(BOOL)hasLocaltimedelta;
-(BOOL)fromStorage;
-(unsigned long long)servertimestamp;
-(unsigned long long)localtimedelta;
@end

