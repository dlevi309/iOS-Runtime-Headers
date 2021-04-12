/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariViewControllerTappedOnToolbarButtonEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _button;
	BOOL _usedLongTap;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasButton; 
@property (assign,nonatomic) int button;                                //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasUsedLongTap; 
@property (assign,nonatomic) BOOL usedLongTap;                          //@synthesize usedLongTap=_usedLongTap - In the implementation block
-(id)dictionaryRepresentation;
-(int)button;
-(unsigned long long)timestamp;
-(void)setButton:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasButton:(BOOL)arg1 ;
-(id)buttonAsString:(int)arg1 ;
-(int)StringAsButton:(id)arg1 ;
-(BOOL)usedLongTap;
-(void)setUsedLongTap:(BOOL)arg1 ;
-(void)setHasUsedLongTap:(BOOL)arg1 ;
-(BOOL)hasUsedLongTap;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasButton;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

