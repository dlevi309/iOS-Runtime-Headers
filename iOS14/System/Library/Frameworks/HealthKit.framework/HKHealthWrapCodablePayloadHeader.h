/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_HK27 _has;

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
-(id)dictionaryRepresentation;
-(long long)endDate;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(BOOL)hasPayloadType;
-(BOOL)hasSubjectUUID;
-(BOOL)hasPayloadIdentifier;
-(BOOL)hasApplicationData;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(NSData *)subjectUUID;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(void)setSubjectUUID:(NSData *)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(NSString *)channel;
-(id)description;
-(NSData *)applicationData;
-(void)clearKeyValuePairs;
-(NSMutableArray *)keyValuePairs;
-(BOOL)hasChannel;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
@end

