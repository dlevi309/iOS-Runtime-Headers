/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAWDLibnetcoreCellularFallbackReport, NSString, NSMutableArray, NWAWDLibnetcoreConnectionStatisticsReport;

@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {

	unsigned long long _iPAddressAttemptCount;
	unsigned long long _timestamp;
	NWAWDLibnetcoreCellularFallbackReport* _cellularFallbackReport;
	NSString* _clientIdentifier;
	NSMutableArray* _connectionAttemptStatisticsReports;
	NWAWDLibnetcoreConnectionStatisticsReport* _connectionStatisticsReport;
	int _reportReason;
	NSString* _sourceAppIdentifier;
	BOOL _delegated;
	SCD_Struct_NW35 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                                                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDelegated; 
@property (assign,nonatomic) BOOL delegated;                                                                      //@synthesize delegated=_delegated - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) int reportReason;                                                                    //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreConnectionStatisticsReport * connectionStatisticsReport;              //@synthesize connectionStatisticsReport=_connectionStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasCellularFallbackReport; 
@property (nonatomic,retain) NWAWDLibnetcoreCellularFallbackReport * cellularFallbackReport;                      //@synthesize cellularFallbackReport=_cellularFallbackReport - In the implementation block
@property (assign,nonatomic) BOOL hasIPAddressAttemptCount; 
@property (assign,nonatomic) unsigned long long iPAddressAttemptCount;                                            //@synthesize iPAddressAttemptCount=_iPAddressAttemptCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectionAttemptStatisticsReports;                                 //@synthesize connectionAttemptStatisticsReports=_connectionAttemptStatisticsReports - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppIdentifier; 
@property (nonatomic,retain) NSString * sourceAppIdentifier;                                                      //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(Class)connectionAttemptStatisticsReportsType;
-(id)dictionaryRepresentation;
-(void)setCellularFallbackReport:(NWAWDLibnetcoreCellularFallbackReport *)arg1 ;
-(BOOL)hasDelegated;
-(void)setReportReason:(int)arg1 ;
-(void)setHasIPAddressAttemptCount:(BOOL)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setDelegated:(BOOL)arg1 ;
-(int)StringAsReportReason:(id)arg1 ;
-(BOOL)hasClientIdentifier;
-(unsigned long long)timestamp;
-(void)setConnectionStatisticsReport:(NWAWDLibnetcoreConnectionStatisticsReport *)arg1 ;
-(void)setHasDelegated:(BOOL)arg1 ;
-(void)clearConnectionAttemptStatisticsReports;
-(void)addConnectionAttemptStatisticsReports:(id)arg1 ;
-(unsigned long long)iPAddressAttemptCount;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasReportReason;
-(id)description;
-(BOOL)delegated;
-(NSString *)sourceAppIdentifier;
-(int)reportReason;
-(BOOL)hasConnectionStatisticsReport;
-(unsigned long long)connectionAttemptStatisticsReportsCount;
-(BOOL)hasCellularFallbackReport;
-(BOOL)hasSourceAppIdentifier;
-(NSMutableArray *)connectionAttemptStatisticsReports;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setIPAddressAttemptCount:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)arg1 ;
-(void)setConnectionAttemptStatisticsReports:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasReportReason:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
-(id)reportReasonAsString:(int)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasIPAddressAttemptCount;
-(NWAWDLibnetcoreConnectionStatisticsReport *)connectionStatisticsReport;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NWAWDLibnetcoreCellularFallbackReport *)cellularFallbackReport;
-(BOOL)isEqual:(id)arg1 ;
@end

