/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isNetworkEnabled;
	BOOL _isNetworkActive;
	BOOL _isNetworkReachable;
	BOOL _usesRelay;
	BOOL _isInitiator;
	unsigned _endedReason;
	unsigned _genericError;
	unsigned _gameKitError;
	unsigned _conferenceMiscError;
	unsigned _networkCheckResult;
	unsigned _remoteNetworkConnection;
	unsigned _localNetworkConnection;
	unsigned _connectionType;
	NSString* _guid;
	NSNumber* _callDuration;
	NSNumber* _dataRate;
	NSNumber* _gksError;
	NSNumber* _connectDuration;
	NSNumber* _currentNATType;
	NSNumber* _remoteNATType;
	NSNumber* _relayConnectDuration;
	NSNumber* _linkQuality;
	NSNumber* _gksReturnCode;

}

@property (nonatomic,readonly) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned endedReason;                          //@synthesize endedReason=_endedReason - In the implementation block
@property (nonatomic,readonly) unsigned genericError;                         //@synthesize genericError=_genericError - In the implementation block
@property (nonatomic,readonly) unsigned gameKitError;                         //@synthesize gameKitError=_gameKitError - In the implementation block
@property (nonatomic,readonly) unsigned conferenceMiscError;                  //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (nonatomic,readonly) NSNumber * callDuration;                       //@synthesize callDuration=_callDuration - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkEnabled;                         //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkActive;                          //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkReachable;                       //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (nonatomic,readonly) unsigned networkCheckResult;                   //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (nonatomic,readonly) NSNumber * dataRate;                           //@synthesize dataRate=_dataRate - In the implementation block
@property (nonatomic,readonly) NSNumber * gksError;                           //@synthesize gksError=_gksError - In the implementation block
@property (nonatomic,readonly) NSNumber * connectDuration;                    //@synthesize connectDuration=_connectDuration - In the implementation block
@property (nonatomic,readonly) unsigned remoteNetworkConnection;              //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (nonatomic,readonly) unsigned localNetworkConnection;               //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (nonatomic,readonly) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) BOOL usesRelay;                                //@synthesize usesRelay=_usesRelay - In the implementation block
@property (nonatomic,readonly) NSNumber * currentNATType;                     //@synthesize currentNATType=_currentNATType - In the implementation block
@property (nonatomic,readonly) NSNumber * remoteNATType;                      //@synthesize remoteNATType=_remoteNATType - In the implementation block
@property (nonatomic,readonly) NSNumber * relayConnectDuration;               //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (nonatomic,readonly) BOOL isInitiator;                              //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) NSNumber * linkQuality;                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (nonatomic,readonly) NSNumber * gksReturnCode;                      //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNetworkReachable;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithGuid:(id)arg1 endedReason:(unsigned)arg2 genericError:(unsigned)arg3 gameKitError:(unsigned)arg4 conferenceMiscError:(unsigned)arg5 callDuration:(id)arg6 isNetworkEnabled:(BOOL)arg7 isNetworkActive:(BOOL)arg8 isNetworkReachable:(BOOL)arg9 networkCheckResult:(unsigned)arg10 dataRate:(id)arg11 gksError:(id)arg12 connectDuration:(id)arg13 remoteNetworkConnection:(unsigned)arg14 localNetworkConnection:(unsigned)arg15 connectionType:(unsigned)arg16 usesRelay:(BOOL)arg17 currentNATType:(id)arg18 remoteNATType:(id)arg19 relayConnectDuration:(id)arg20 isInitiator:(BOOL)arg21 linkQuality:(id)arg22 gksReturnCode:(id)arg23 ;
-(NSString *)guid;
-(NSNumber *)linkQuality;
-(unsigned)connectionType;
-(NSNumber *)connectDuration;
-(NSString *)name;
-(BOOL)isInitiator;
-(NSNumber *)dataRate;
-(NSNumber *)gksError;
-(NSNumber *)currentNATType;
-(unsigned)endedReason;
-(unsigned)genericError;
-(unsigned)gameKitError;
-(unsigned)conferenceMiscError;
-(BOOL)isNetworkEnabled;
-(BOOL)isNetworkActive;
-(unsigned)networkCheckResult;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(NSNumber *)remoteNATType;
-(NSNumber *)relayConnectDuration;
-(NSNumber *)gksReturnCode;
-(NSNumber *)callDuration;
-(BOOL)usesRelay;
@end

