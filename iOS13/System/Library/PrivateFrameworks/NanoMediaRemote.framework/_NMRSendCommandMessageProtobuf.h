/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_NMRCommandOptionsProtobuf *)options;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)setOptions:(_NMRCommandOptionsProtobuf *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(int)originIdentifier;
-(void)setCommand:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)command;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(BOOL)hasOptions;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
@end

