/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)hasUniqueID;
-(void)setCommutePlanBytes:(NSData *)arg1 ;
-(BOOL)hasCommutePlanBytes;
-(NSData *)commutePlanBytes;
-(void)setReminderInterval:(double)arg1 ;
-(void)setHasReminderInterval:(BOOL)arg1 ;
-(BOOL)hasReminderInterval;
-(double)reminderInterval;
@end

