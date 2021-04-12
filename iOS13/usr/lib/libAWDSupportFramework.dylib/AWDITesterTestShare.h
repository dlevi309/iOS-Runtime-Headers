/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestShare : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _shareMethod;
	NSString* _shareOption;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasShareMethod; 
@property (nonatomic,retain) NSString * shareMethod;                    //@synthesize shareMethod=_shareMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasShareOption; 
@property (nonatomic,retain) NSString * shareOption;                    //@synthesize shareOption=_shareOption - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)shareMethod;
-(void)setShareMethod:(NSString *)arg1 ;
-(BOOL)hasShareMethod;
-(void)setShareOption:(NSString *)arg1 ;
-(NSString *)shareOption;
-(BOOL)hasShareOption;
@end

