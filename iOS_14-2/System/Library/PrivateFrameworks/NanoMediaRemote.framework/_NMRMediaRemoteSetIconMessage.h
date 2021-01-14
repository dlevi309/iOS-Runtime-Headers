/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRMediaRemoteSetIconMessage : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _bundleID;
	NSData* _iconData;
	int _originIdentifier;
	NSData* _originalDigest;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) BOOL hasIconData; 
@property (nonatomic,retain) NSData * iconData;                     //@synthesize iconData=_iconData - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalDigest; 
@property (nonatomic,retain) NSData * originalDigest;               //@synthesize originalDigest=_originalDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(int)originIdentifier;
-(NSData *)iconData;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIconData:(NSData *)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setOriginalDigest:(NSData *)arg1 ;
-(BOOL)hasOriginalDigest;
-(NSData *)originalDigest;
-(BOOL)hasIconData;
@end

