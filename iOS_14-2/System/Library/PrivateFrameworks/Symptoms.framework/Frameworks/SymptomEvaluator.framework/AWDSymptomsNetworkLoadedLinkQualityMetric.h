/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dataStalls;
	int _lQM;
	int _lastReportedRSSI;
	int _loadedLQM;
	NSString* _networkAttachmentLabel;
	int _networkType;
	NSString* _radioAccessTechnology;
	BOOL _isLowInternetDL;
	BOOL _isLowInternetUL;
	BOOL _isNetworkReliable;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkAttachmentLabel; 
@property (nonatomic,retain) NSString * networkAttachmentLabel;              //@synthesize networkAttachmentLabel=_networkAttachmentLabel - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedLQM; 
@property (assign,nonatomic) int loadedLQM;                                  //@synthesize loadedLQM=_loadedLQM - In the implementation block
@property (assign,nonatomic) BOOL hasLQM; 
@property (assign,nonatomic) int lQM;                                        //@synthesize lQM=_lQM - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioAccessTechnology; 
@property (nonatomic,retain) NSString * radioAccessTechnology;               //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkReliable; 
@property (assign,nonatomic) BOOL isNetworkReliable;                         //@synthesize isNetworkReliable=_isNetworkReliable - In the implementation block
@property (assign,nonatomic) BOOL hasDataStalls; 
@property (assign,nonatomic) unsigned dataStalls;                            //@synthesize dataStalls=_dataStalls - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedRSSI; 
@property (assign,nonatomic) int lastReportedRSSI;                           //@synthesize lastReportedRSSI=_lastReportedRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasIsLowInternetUL; 
@property (assign,nonatomic) BOOL isLowInternetUL;                           //@synthesize isLowInternetUL=_isLowInternetUL - In the implementation block
@property (assign,nonatomic) BOOL hasIsLowInternetDL; 
@property (assign,nonatomic) BOOL isLowInternetDL;                           //@synthesize isLowInternetDL=_isLowInternetDL - In the implementation block
-(void)setLastReportedRSSI:(int)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)lastReportedRSSI;
-(void)setLoadedLQM:(int)arg1 ;
-(BOOL)isLowInternetDL;
-(unsigned long long)timestamp;
-(int)lQM;
-(BOOL)hasNetworkType;
-(void)setHasLoadedLQM:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLoadedLQM;
-(int)loadedLQM;
-(void)setIsLowInternetDL:(BOOL)arg1 ;
-(void)setHasIsLowInternetDL:(BOOL)arg1 ;
-(void)setRadioAccessTechnology:(NSString *)arg1 ;
-(BOOL)hasIsLowInternetUL;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasLQM;
-(void)setLQM:(int)arg1 ;
-(void)setHasLastReportedRSSI:(BOOL)arg1 ;
-(id)description;
-(void)setIsNetworkReliable:(BOOL)arg1 ;
-(BOOL)hasDataStalls;
-(unsigned)dataStalls;
-(void)setNetworkAttachmentLabel:(NSString *)arg1 ;
-(id)networkTypeAsString:(int)arg1 ;
-(void)setHasIsNetworkReliable:(BOOL)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(NSString *)radioAccessTechnology;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasNetworkAttachmentLabel;
-(void)setHasIsLowInternetUL:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasLastReportedRSSI;
-(BOOL)hasRadioAccessTechnology;
-(void)setHasLQM:(BOOL)arg1 ;
-(BOOL)isNetworkReliable;
-(BOOL)hasIsLowInternetDL;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDataStalls:(unsigned)arg1 ;
-(NSString *)networkAttachmentLabel;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDataStalls:(BOOL)arg1 ;
-(BOOL)isLowInternetUL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasIsNetworkReliable;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsLowInternetUL:(BOOL)arg1 ;
@end

