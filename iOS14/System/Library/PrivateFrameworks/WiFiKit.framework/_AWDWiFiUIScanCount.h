/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _AWDWiFiUIScanCount : PBCodable <NSCopying> {

	unsigned _max;
	NSString* _section;
	SCD_Struct_AW13 _has;

}

@property (nonatomic,readonly) BOOL hasSection; 
@property (nonatomic,retain) NSString * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) unsigned max;                    //@synthesize max=_max - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSection:(NSString *)arg1 ;
-(BOOL)hasMax;
-(NSString *)section;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasMax:(BOOL)arg1 ;
-(unsigned)max;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMax:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSection;
-(BOOL)isEqual:(id)arg1 ;
@end

