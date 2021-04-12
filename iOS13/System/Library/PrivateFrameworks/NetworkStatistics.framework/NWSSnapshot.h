/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NSString, NSDictionary;

@interface NWSSnapshot : NSObject {

	nstat_counts _counts;
	unsigned long long _changeSeqno;
	unsigned long long _sourceIdentifier;
	NSString* _provider;
	NSDictionary* _traditionalDictionary;

}

@property (readonly) unsigned _rxDuplicateBytes; 
@property (readonly) unsigned _rxOutOfOrderBytes; 
@property (readonly) unsigned _txRetransmittedBytes; 
@property (readonly) unsigned _connectAttempts; 
@property (readonly) unsigned _connectSuccesses; 
@property (readonly) double _rttMinimum; 
@property (readonly) double _rttAverage; 
@property (readonly) double _rttVariation; 
@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes; 
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes; 
@property (readonly) unsigned long long txWiredBytes; 
@property (readonly) unsigned long long changeSeqno;                    //@synthesize changeSeqno=_changeSeqno - In the implementation block
@property (readonly) unsigned long long sourceIdentifier;               //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (readonly) NSString * provider;                               //@synthesize provider=_provider - In the implementation block
@property (readonly) NSDictionary * traditionalDictionary;              //@synthesize traditionalDictionary=_traditionalDictionary - In the implementation block
-(id)description;
-(NSString *)provider;
-(unsigned long long)sourceIdentifier;
-(unsigned)_rxOutOfOrderBytes;
-(unsigned long long)rxBytes;
-(unsigned long long)rxPackets;
-(unsigned long long)txBytes;
-(unsigned long long)txPackets;
-(unsigned)_connectAttempts;
-(unsigned)_connectSuccesses;
-(unsigned)_rxDuplicateBytes;
-(unsigned)_txRetransmittedBytes;
-(double)_rttMinimum;
-(double)_rttAverage;
-(double)_rttVariation;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(NSDictionary *)traditionalDictionary;
-(id)_createCountsForProvider:(int)arg1 ;
-(id)_initWithCounts:(const nstat_counts*)arg1 sourceIdent:(unsigned long long)arg2 seqno:(unsigned long long)arg3 ;
-(unsigned long long)changeSeqno;
@end

