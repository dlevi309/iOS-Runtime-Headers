/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPAccessoryMeta : PBCodable <NSCopying> {

	NSString* _make;
	NSString* _model;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,retain) NSString * make;                 //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)make;
-(BOOL)hasVersion;
-(NSString *)model;
-(BOOL)hasModel;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMake;
-(void)setMake:(NSString *)arg1 ;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

