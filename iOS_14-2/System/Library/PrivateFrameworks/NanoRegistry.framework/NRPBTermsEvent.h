/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NRPBTermsEvent : PBCodable <NSCopying> {

	double _eventDate;
	NSString* _acknowledgedDeviceName;
	NSString* _acknowledgedDeviceSerialNumber;
	NSString* _displayDeviceName;
	NSString* _displayDeviceSerialNumber;
	NSString* _documentationID;
	int _eventType;
	NSString* _loggingProcessName;
	int _presentationLocation;
	NSString* _presentationReason;
	NSData* _termsText;
	SCD_Struct_NR10 _has;

}

@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasTermsText; 
@property (nonatomic,retain) NSData * termsText;                                     //@synthesize termsText=_termsText - In the implementation block
@property (nonatomic,readonly) BOOL hasDocumentationID; 
@property (nonatomic,retain) NSString * documentationID;                             //@synthesize documentationID=_documentationID - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentationReason; 
@property (nonatomic,retain) NSString * presentationReason;                          //@synthesize presentationReason=_presentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationLocation; 
@property (assign,nonatomic) int presentationLocation;                               //@synthesize presentationLocation=_presentationLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasAcknowledgedDeviceName; 
@property (nonatomic,retain) NSString * acknowledgedDeviceName;                      //@synthesize acknowledgedDeviceName=_acknowledgedDeviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasAcknowledgedDeviceSerialNumber; 
@property (nonatomic,retain) NSString * acknowledgedDeviceSerialNumber;              //@synthesize acknowledgedDeviceSerialNumber=_acknowledgedDeviceSerialNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDeviceName; 
@property (nonatomic,retain) NSString * displayDeviceName;                           //@synthesize displayDeviceName=_displayDeviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDeviceSerialNumber; 
@property (nonatomic,retain) NSString * displayDeviceSerialNumber;                   //@synthesize displayDeviceSerialNumber=_displayDeviceSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasEventDate; 
@property (assign,nonatomic) double eventDate;                                       //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) BOOL hasLoggingProcessName; 
@property (nonatomic,retain) NSString * loggingProcessName;                          //@synthesize loggingProcessName=_loggingProcessName - In the implementation block
-(NSString *)presentationReason;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(BOOL)hasTermsText;
-(BOOL)hasDocumentationID;
-(void)setHasPresentationLocation:(BOOL)arg1 ;
-(BOOL)hasPresentationLocation;
-(BOOL)hasAcknowledgedDeviceName;
-(BOOL)hasAcknowledgedDeviceSerialNumber;
-(BOOL)hasDisplayDeviceName;
-(BOOL)hasDisplayDeviceSerialNumber;
-(BOOL)hasLoggingProcessName;
-(NSString *)documentationID;
-(int)presentationLocation;
-(NSString *)acknowledgedDeviceName;
-(NSString *)acknowledgedDeviceSerialNumber;
-(NSString *)displayDeviceName;
-(NSString *)displayDeviceSerialNumber;
-(NSString *)loggingProcessName;
-(void)setPresentationReason:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventDate:(double)arg1 ;
-(id)description;
-(double)eventDate;
-(unsigned long long)hash;
-(BOOL)hasPresentationReason;
-(BOOL)hasEventDate;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)termsText;
-(void)setTermsText:(NSData *)arg1 ;
-(void)setDocumentationID:(NSString *)arg1 ;
-(void)setPresentationLocation:(int)arg1 ;
-(void)setAcknowledgedDeviceName:(NSString *)arg1 ;
-(void)setAcknowledgedDeviceSerialNumber:(NSString *)arg1 ;
-(void)setDisplayDeviceName:(NSString *)arg1 ;
-(void)setDisplayDeviceSerialNumber:(NSString *)arg1 ;
-(void)setLoggingProcessName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasEventDate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

