/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(unsigned)arg1 ;
-(unsigned)max;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(BOOL)hasSection;
@end

