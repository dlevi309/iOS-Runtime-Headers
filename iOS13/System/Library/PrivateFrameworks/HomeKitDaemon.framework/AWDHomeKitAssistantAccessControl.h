/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying> {

	unsigned long long _numCapableAccessories;
	unsigned long long _numEnabledAccessories;
	unsigned long long _options;
	unsigned long long _timestamp;
	BOOL _isEnabled;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) BOOL isEnabled;                                        //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL hasNumEnabledAccessories; 
@property (assign,nonatomic) unsigned long long numEnabledAccessories;              //@synthesize numEnabledAccessories=_numEnabledAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCapableAccessories; 
@property (assign,nonatomic) unsigned long long numCapableAccessories;              //@synthesize numCapableAccessories=_numCapableAccessories - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasOptions;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsEnabled;
-(void)setHasOptions:(BOOL)arg1 ;
-(void)setNumEnabledAccessories:(unsigned long long)arg1 ;
-(void)setNumCapableAccessories:(unsigned long long)arg1 ;
-(unsigned long long)numEnabledAccessories;
-(unsigned long long)numCapableAccessories;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(void)setHasNumEnabledAccessories:(BOOL)arg1 ;
-(BOOL)hasNumEnabledAccessories;
-(void)setHasNumCapableAccessories:(BOOL)arg1 ;
-(BOOL)hasNumCapableAccessories;
@end

