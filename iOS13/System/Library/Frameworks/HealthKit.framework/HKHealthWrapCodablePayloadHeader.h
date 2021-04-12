/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying> {

	long long _endDate;
	long long _startDate;
	NSData* _applicationData;
	NSString* _channel;
	NSMutableArray* _keyValuePairs;
	NSString* _payloadIdentifier;
	NSString* _payloadType;
	NSData* _subjectUUID;
	SCD_Struct_HK23 _has;

}

@property (nonatomic,readonly) BOOL hasChannel; 
@property (nonatomic,retain) NSString * channel;                          //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadType; 
@property (nonatomic,retain) NSString * payloadType;                      //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,readonly) BOOL hasSubjectUUID; 
@property (nonatomic,retain) NSData * subjectUUID;                        //@synthesize subjectUUID=_subjectUUID - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPayloadIdentifier; 
@property (nonatomic,retain) NSString * payloadIdentifier;                //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationData; 
@property (nonatomic,retain) NSData * applicationData;                    //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
+(Class)keyValuePairsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)channel;
-(void)setChannel:(NSString *)arg1 ;
-(BOOL)hasChannel;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setPayloadType:(NSString *)arg1 ;
-(NSString *)payloadType;
-(BOOL)hasApplicationData;
-(NSData *)subjectUUID;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(void)setSubjectUUID:(NSData *)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPayloadType;
-(BOOL)hasSubjectUUID;
-(BOOL)hasPayloadIdentifier;
@end

