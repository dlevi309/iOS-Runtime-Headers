/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _NMRCommandOptionsProtobuf;

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _bundleID;
	int _command;
	_NMRCommandOptionsProtobuf* _options;
	int _originIdentifier;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                       //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) _NMRCommandOptionsProtobuf * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                              //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(int)originIdentifier;
-(double)timestamp;
-(BOOL)hasCommand;
-(_NMRCommandOptionsProtobuf *)options;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(void)setOptions:(_NMRCommandOptionsProtobuf *)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)command;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOptions;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
@end

