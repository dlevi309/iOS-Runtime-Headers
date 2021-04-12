/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoCommutePlanReminderForCommutePlanAndPassResponse : PBCodable <NSCopying> {

	double _reminderInterval;
	NSData* _errorData;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                          //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasReminderInterval; 
@property (assign,nonatomic) double reminderInterval;               //@synthesize reminderInterval=_reminderInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                    //@synthesize errorData=_errorData - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setReminderInterval:(double)arg1 ;
-(void)setHasReminderInterval:(BOOL)arg1 ;
-(BOOL)hasReminderInterval;
-(double)reminderInterval;
@end
