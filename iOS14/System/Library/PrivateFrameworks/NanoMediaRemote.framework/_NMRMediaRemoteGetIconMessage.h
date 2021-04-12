/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NMRMediaRemoteGetIconMessage : PBCodable <NSCopying> {

	double _height;
	double _timestamp;
	double _width;
	NSString* _bundleID;
	int _originIdentifier;
	SCD_Struct_NM9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width;                          //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(void)setHeight:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(double)width;
-(void)setBundleID:(NSString *)arg1 ;
-(int)originIdentifier;
-(BOOL)hasWidth;
-(double)timestamp;
-(void)setWidth:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)height;
-(id)description;
-(NSString *)bundleID;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
@end

