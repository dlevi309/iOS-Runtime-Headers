/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest : PBRequest <NSCopying> {

	double _reminderInterval;
	NSData* _commutePlanBytes;
	NSString* _uniqueID;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasCommutePlanBytes; 
@property (nonatomic,retain) NSData * commutePlanBytes;               //@synthesize commutePlanBytes=_commutePlanBytes - In the implementation block
@property (assign,nonatomic) BOOL hasReminderInterval; 
@property (assign,nonatomic) double reminderInterval;                 //@synthesize reminderInterval=_reminderInterval - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasUniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCommutePlanBytes:(NSData *)arg1 ;
-(BOOL)hasCommutePlanBytes;
-(NSData *)commutePlanBytes;
-(void)setReminderInterval:(double)arg1 ;
-(void)setHasReminderInterval:(BOOL)arg1 ;
-(BOOL)hasReminderInterval;
-(double)reminderInterval;
@end

