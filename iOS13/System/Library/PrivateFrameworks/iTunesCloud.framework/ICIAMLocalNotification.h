/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_IC15 _has;

}

@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                          //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasInterval; 
@property (assign,nonatomic) double interval;                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) NSString * notification;              //@synthesize notification=_notification - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)notification;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNotification:(NSString *)arg1 ;
-(int)trigger;
-(void)setTrigger:(int)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(BOOL)hasNotification;
-(BOOL)hasInterval;
-(void)setHasInterval:(BOOL)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
@end

