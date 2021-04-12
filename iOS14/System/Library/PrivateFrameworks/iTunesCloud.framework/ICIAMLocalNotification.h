/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {

	double _date;
	double _interval;
	NSString* _notification;
	int _trigger;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasInterval; 
@property (assign,nonatomic) double interval;                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) NSString * notification;              //@synthesize notification=_notification - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(void)setInterval:(double)arg1 ;
-(int)trigger;
-(void)setNotification:(NSString *)arg1 ;
-(double)interval;
-(NSString *)notification;
-(void)setTrigger:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(void)setHasTrigger:(BOOL)arg1 ;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(BOOL)hasNotification;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasInterval;
-(void)setHasInterval:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

