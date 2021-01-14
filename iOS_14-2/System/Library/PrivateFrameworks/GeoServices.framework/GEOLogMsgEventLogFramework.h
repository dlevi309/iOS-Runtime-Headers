/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventLogFramework : PBCodable <NSCopying> {

	NSMutableArray* _logFrameworkItems;
	unsigned long long _messageSize;
	unsigned _messageCount;
	int _messageType;
	int _metricState;
	int _metricType;
	int _purgeReason;
	struct {
		unsigned has_messageSize : 1;
		unsigned has_messageCount : 1;
		unsigned has_messageType : 1;
		unsigned has_metricState : 1;
		unsigned has_metricType : 1;
		unsigned has_purgeReason : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMetricType; 
@property (assign,nonatomic) int metricType; 
@property (assign,nonatomic) BOOL hasMetricState; 
@property (assign,nonatomic) int metricState; 
@property (assign,nonatomic) BOOL hasMessageCount; 
@property (assign,nonatomic) unsigned messageCount; 
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize; 
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType; 
@property (nonatomic,retain) NSMutableArray * logFrameworkItems; 
@property (assign,nonatomic) BOOL hasPurgeReason; 
@property (assign,nonatomic) int purgeReason; 
+(Class)logFrameworkItemType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)metricType;
-(void)addLogFrameworkItem:(id)arg1 ;
-(void)setPurgeReason:(int)arg1 ;
-(unsigned long long)logFrameworkItemsCount;
-(void)setHasMessageType:(BOOL)arg1 ;
-(void)clearLogFrameworkItems;
-(id)logFrameworkItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(NSMutableArray *)logFrameworkItems;
-(void)setLogFrameworkItems:(NSMutableArray *)arg1 ;
-(int)purgeReason;
-(void)setHasPurgeReason:(BOOL)arg1 ;
-(BOOL)hasPurgeReason;
-(id)purgeReasonAsString:(int)arg1 ;
-(int)StringAsPurgeReason:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setMetricType:(int)arg1 ;
-(void)setMetricState:(int)arg1 ;
-(void)setMessageCount:(unsigned)arg1 ;
-(void)setHasMetricType:(BOOL)arg1 ;
-(BOOL)hasMetricType;
-(id)metricTypeAsString:(int)arg1 ;
-(int)metricState;
-(int)StringAsMetricType:(id)arg1 ;
-(void)setHasMetricState:(BOOL)arg1 ;
-(BOOL)hasMetricState;
-(id)metricStateAsString:(int)arg1 ;
-(int)StringAsMetricState:(id)arg1 ;
-(void)setHasMessageCount:(BOOL)arg1 ;
-(BOOL)hasMessageCount;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)messageCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)messageSize;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

