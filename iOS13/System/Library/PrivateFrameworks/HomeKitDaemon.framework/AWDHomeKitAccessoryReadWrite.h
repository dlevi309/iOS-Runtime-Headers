/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _certified;
	NSMutableArray* _characteristics;
	unsigned _consecutiveFailureCount;
	unsigned _duration;
	int _errorCode;
	NSString* _primaryServiceType;
	int _source;
	unsigned _timeElapsedSinceFirstFailure;
	NSString* _transaction;
	NSString* _transportProtocolVersion;
	int _transportType;
	unsigned _underlyingErrorCode;
	NSString* _underlyingErrorDomain;
	AWDHomeKitVendorInformation* _vendorDetails;
	BOOL _isCached;
	BOOL _isRemote;
	BOOL _isRemoteAccessAllowed;
	BOOL _isRemotelyReachable;
	BOOL _isResidentAvailable;
	BOOL _isTimedWrite;
	BOOL _isWrite;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                            //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsWrite; 
@property (assign,nonatomic) BOOL isWrite;                                             //@synthesize isWrite=_isWrite - In the implementation block
@property (assign,nonatomic) BOOL hasIsRemote; 
@property (assign,nonatomic) BOOL isRemote;                                            //@synthesize isRemote=_isRemote - In the implementation block
@property (nonatomic,retain) NSMutableArray * characteristics;                         //@synthesize characteristics=_characteristics - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasTransaction; 
@property (nonatomic,retain) NSString * transaction;                                   //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL hasIsTimedWrite; 
@property (assign,nonatomic) BOOL isTimedWrite;                                        //@synthesize isTimedWrite=_isTimedWrite - In the implementation block
@property (nonatomic,readonly) BOOL hasTransportProtocolVersion; 
@property (nonatomic,retain) NSString * transportProtocolVersion;                      //@synthesize transportProtocolVersion=_transportProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
@property (assign,nonatomic) BOOL hasIsCached; 
@property (assign,nonatomic) BOOL isCached;                                            //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                         //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) unsigned underlyingErrorCode;                             //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryServiceType; 
@property (nonatomic,retain) NSString * primaryServiceType;                            //@synthesize primaryServiceType=_primaryServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentAvailable; 
@property (assign,nonatomic) BOOL isResidentAvailable;                                 //@synthesize isResidentAvailable=_isResidentAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasIsRemoteAccessAllowed; 
@property (assign,nonatomic) BOOL isRemoteAccessAllowed;                               //@synthesize isRemoteAccessAllowed=_isRemoteAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasIsRemotelyReachable; 
@property (assign,nonatomic) BOOL isRemotelyReachable;                                 //@synthesize isRemotelyReachable=_isRemotelyReachable - In the implementation block
@property (assign,nonatomic) BOOL hasConsecutiveFailureCount; 
@property (assign,nonatomic) unsigned consecutiveFailureCount;                         //@synthesize consecutiveFailureCount=_consecutiveFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeElapsedSinceFirstFailure; 
@property (assign,nonatomic) unsigned timeElapsedSinceFirstFailure;                    //@synthesize timeElapsedSinceFirstFailure=_timeElapsedSinceFirstFailure - In the implementation block
+(Class)characteristicsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(NSString *)transaction;
-(void)setTransaction:(NSString *)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
-(BOOL)isRemote;
-(void)setTransportType:(int)arg1 ;
-(int)errorCode;
-(BOOL)isCached;
-(void)setIsCached:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setUnderlyingErrorCode:(unsigned)arg1 ;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(NSString *)underlyingErrorDomain;
-(unsigned)underlyingErrorCode;
-(void)setCharacteristics:(NSMutableArray *)arg1 ;
-(void)addCharacteristics:(id)arg1 ;
-(unsigned long long)characteristicsCount;
-(void)clearCharacteristics;
-(id)characteristicsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)characteristics;
-(void)setIsRemote:(BOOL)arg1 ;
-(BOOL)isRemoteAccessAllowed;
-(NSString *)primaryServiceType;
-(BOOL)isResidentAvailable;
-(void)setIsResidentAvailable:(BOOL)arg1 ;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setTransportProtocolVersion:(NSString *)arg1 ;
-(void)setPrimaryServiceType:(NSString *)arg1 ;
-(void)setIsWrite:(BOOL)arg1 ;
-(void)setHasIsWrite:(BOOL)arg1 ;
-(BOOL)hasIsWrite;
-(void)setHasIsRemote:(BOOL)arg1 ;
-(BOOL)hasIsRemote;
-(BOOL)hasTransaction;
-(void)setIsTimedWrite:(BOOL)arg1 ;
-(void)setHasIsTimedWrite:(BOOL)arg1 ;
-(BOOL)hasIsTimedWrite;
-(BOOL)hasTransportProtocolVersion;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
-(void)setHasIsCached:(BOOL)arg1 ;
-(BOOL)hasIsCached;
-(BOOL)hasPrimaryServiceType;
-(void)setHasIsResidentAvailable:(BOOL)arg1 ;
-(BOOL)hasIsResidentAvailable;
-(void)setIsRemoteAccessAllowed:(BOOL)arg1 ;
-(void)setHasIsRemoteAccessAllowed:(BOOL)arg1 ;
-(BOOL)hasIsRemoteAccessAllowed;
-(void)setIsRemotelyReachable:(BOOL)arg1 ;
-(void)setHasIsRemotelyReachable:(BOOL)arg1 ;
-(BOOL)hasIsRemotelyReachable;
-(void)setConsecutiveFailureCount:(unsigned)arg1 ;
-(void)setHasConsecutiveFailureCount:(BOOL)arg1 ;
-(BOOL)hasConsecutiveFailureCount;
-(void)setTimeElapsedSinceFirstFailure:(unsigned)arg1 ;
-(void)setHasTimeElapsedSinceFirstFailure:(BOOL)arg1 ;
-(BOOL)hasTimeElapsedSinceFirstFailure;
-(BOOL)isWrite;
-(BOOL)isTimedWrite;
-(NSString *)transportProtocolVersion;
-(BOOL)isRemotelyReachable;
-(unsigned)consecutiveFailureCount;
-(unsigned)timeElapsedSinceFirstFailure;
@end

