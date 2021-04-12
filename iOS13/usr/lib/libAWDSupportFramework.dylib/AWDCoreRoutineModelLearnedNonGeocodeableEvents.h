/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineModelLearnedNonGeocodeableEvents : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _learnedNongeocodableEvents;
	int _nongeocodableEvents;
	int _unlearnedNongeocodableEvents;
	SCD_Struct_AW1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUnlearnedNongeocodableEvents; 
@property (assign,nonatomic) int unlearnedNongeocodableEvents;                  //@synthesize unlearnedNongeocodableEvents=_unlearnedNongeocodableEvents - In the implementation block
@property (assign,nonatomic) BOOL hasLearnedNongeocodableEvents; 
@property (assign,nonatomic) int learnedNongeocodableEvents;                    //@synthesize learnedNongeocodableEvents=_learnedNongeocodableEvents - In the implementation block
@property (assign,nonatomic) BOOL hasNongeocodableEvents; 
@property (assign,nonatomic) int nongeocodableEvents;                           //@synthesize nongeocodableEvents=_nongeocodableEvents - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setLearnedNongeocodableEvents:(int)arg1 ;
-(void)setNongeocodableEvents:(int)arg1 ;
-(void)setUnlearnedNongeocodableEvents:(int)arg1 ;
-(void)setHasUnlearnedNongeocodableEvents:(BOOL)arg1 ;
-(BOOL)hasUnlearnedNongeocodableEvents;
-(void)setHasLearnedNongeocodableEvents:(BOOL)arg1 ;
-(BOOL)hasLearnedNongeocodableEvents;
-(void)setHasNongeocodableEvents:(BOOL)arg1 ;
-(BOOL)hasNongeocodableEvents;
-(int)unlearnedNongeocodableEvents;
-(int)learnedNongeocodableEvents;
-(int)nongeocodableEvents;
@end

