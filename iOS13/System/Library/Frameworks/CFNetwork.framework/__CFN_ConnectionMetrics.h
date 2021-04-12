/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_nw_endpoint, OS_nw_establishment_report, OS_nw_connection;
@class NSUUID, NSObject, NSString, __CFN_SessionMetrics, NSDictionary;

@interface __CFN_ConnectionMetrics : NSObject <NSSecureCoding> {

	os_unfair_lock_s connectionLock;
	BOOL _TLSConfigured;
	BOOL _proxyConfigured;
	BOOL _cellular;
	BOOL _expensive;
	BOOL _constrained;
	BOOL _multipath;
	BOOL _usedTFO;
	BOOL _usedByTransaction;
	BOOL _coalesced;
	BOOL _needsCachedTCPInfoAtEnd;
	BOOL _needsCachedSubflowCounts;
	unsigned short _negotiatedTLSProtocolVersion;
	unsigned short _negotiatedTLSCipherSuite;
	NSUUID* _UUID;
	unsigned long long _identifier;
	NSUUID* _initiatingTransactionID;
	double _beginTime;
	double _establishTime;
	double _endTime;
	NSObject*<OS_nw_endpoint> _endpoint;
	NSObject*<OS_nw_endpoint> _localEndpoint;
	NSObject*<OS_nw_endpoint> _remoteEndpoint;
	NSString* _interfaceName;
	NSString* _networkProtocolName;
	NSObject*<OS_nw_establishment_report> _establishmentReport;
	NSObject*<OS_nw_connection> _connection;
	__CFN_SessionMetrics* _sessionMetrics;
	NSDictionary* _cachedTCPInfoAtEnd;
	NSDictionary* _cachedSubflowCounts;
	weak_ptr<TransportConnection>* _transportConnection;

}

@property (assign,nonatomic) weak_ptr<TransportConnection>* transportConnection;                     //@synthesize transportConnection=_transportConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_connection> connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) __CFN_SessionMetrics * sessionMetrics;                                  //@synthesize sessionMetrics=_sessionMetrics - In the implementation block
@property (assign,nonatomic) BOOL needsCachedTCPInfoAtEnd;                                           //@synthesize needsCachedTCPInfoAtEnd=_needsCachedTCPInfoAtEnd - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedTCPInfoAtEnd;                                      //@synthesize cachedTCPInfoAtEnd=_cachedTCPInfoAtEnd - In the implementation block
@property (assign,nonatomic) BOOL needsCachedSubflowCounts;                                          //@synthesize needsCachedSubflowCounts=_needsCachedSubflowCounts - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedSubflowCounts;                                     //@synthesize cachedSubflowCounts=_cachedSubflowCounts - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                                          //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * initiatingTransactionID;                                       //@synthesize initiatingTransactionID=_initiatingTransactionID - In the implementation block
@property (assign,nonatomic) double beginTime;                                                       //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double establishTime;                                                   //@synthesize establishTime=_establishTime - In the implementation block
@property (assign,nonatomic) double endTime;                                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> endpoint;                                     //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,getter=isTLSConfigured,nonatomic) BOOL TLSConfigured;                              //@synthesize TLSConfigured=_TLSConfigured - In the implementation block
@property (assign,getter=isProxyConfigured,nonatomic) BOOL proxyConfigured;                          //@synthesize proxyConfigured=_proxyConfigured - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> localEndpoint;                                //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> remoteEndpoint;                               //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                                 //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,getter=isCellular,nonatomic) BOOL cellular;                                        //@synthesize cellular=_cellular - In the implementation block
@property (assign,getter=isExpensive,nonatomic) BOOL expensive;                                      //@synthesize expensive=_expensive - In the implementation block
@property (assign,getter=isConstrained,nonatomic) BOOL constrained;                                  //@synthesize constrained=_constrained - In the implementation block
@property (assign,getter=isMultipath,nonatomic) BOOL multipath;                                      //@synthesize multipath=_multipath - In the implementation block
@property (assign,nonatomic) BOOL usedTFO;                                                           //@synthesize usedTFO=_usedTFO - In the implementation block
@property (nonatomic,copy) NSString * networkProtocolName;                                           //@synthesize networkProtocolName=_networkProtocolName - In the implementation block
@property (assign,nonatomic) unsigned short negotiatedTLSProtocolVersion;                            //@synthesize negotiatedTLSProtocolVersion=_negotiatedTLSProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned short negotiatedTLSCipherSuite;                                //@synthesize negotiatedTLSCipherSuite=_negotiatedTLSCipherSuite - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_establishment_report> establishmentReport;              //@synthesize establishmentReport=_establishmentReport - In the implementation block
@property (assign,nonatomic) BOOL usedByTransaction;                                                 //@synthesize usedByTransaction=_usedByTransaction - In the implementation block
@property (assign,getter=isCoalesced,nonatomic) BOOL coalesced;                                      //@synthesize coalesced=_coalesced - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)wait;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSObject*<OS_nw_connection>)connection;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(id)initWithConnection:(shared_ptr<TransportConnection>*)arg1 ;
-(void)end;
-(void)begin;
-(void)setEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(__CFN_SessionMetrics *)sessionMetrics;
-(void)setSessionMetrics:(__CFN_SessionMetrics *)arg1 ;
-(NSString *)networkProtocolName;
-(id)subflowCounts;
-(id)tcpInfo;
-(void)setNetworkProtocolName:(NSString *)arg1 ;
-(void)setUsedByTransaction:(BOOL)arg1 ;
-(BOOL)usedByTransaction;
-(void)linkWithTransaction:(id)arg1 sessionMetrics:(id)arg2 ;
-(BOOL)isCellular;
-(void)establish;
-(void)setCoalesced:(BOOL)arg1 ;
-(id)_tcpInfo;
-(id)_subflowCounts;
-(NSUUID *)initiatingTransactionID;
-(void)setInitiatingTransactionID:(NSUUID *)arg1 ;
-(double)establishTime;
-(void)setEstablishTime:(double)arg1 ;
-(BOOL)isTLSConfigured;
-(void)setTLSConfigured:(BOOL)arg1 ;
-(BOOL)isProxyConfigured;
-(void)setProxyConfigured:(BOOL)arg1 ;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(void)setLocalEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(NSObject*<OS_nw_endpoint>)remoteEndpoint;
-(void)setRemoteEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setCellular:(BOOL)arg1 ;
-(BOOL)isExpensive;
-(void)setExpensive:(BOOL)arg1 ;
-(BOOL)isConstrained;
-(void)setConstrained:(BOOL)arg1 ;
-(BOOL)isMultipath;
-(void)setMultipath:(BOOL)arg1 ;
-(BOOL)usedTFO;
-(void)setUsedTFO:(BOOL)arg1 ;
-(unsigned short)negotiatedTLSProtocolVersion;
-(void)setNegotiatedTLSProtocolVersion:(unsigned short)arg1 ;
-(unsigned short)negotiatedTLSCipherSuite;
-(void)setNegotiatedTLSCipherSuite:(unsigned short)arg1 ;
-(NSObject*<OS_nw_establishment_report>)establishmentReport;
-(void)setEstablishmentReport:(NSObject*<OS_nw_establishment_report>)arg1 ;
-(BOOL)isCoalesced;
-(weak_ptr<TransportConnection>*)transportConnection;
-(void)setTransportConnection:(weak_ptr<TransportConnection>*)arg1 ;
-(BOOL)needsCachedTCPInfoAtEnd;
-(void)setNeedsCachedTCPInfoAtEnd:(BOOL)arg1 ;
-(NSDictionary *)cachedTCPInfoAtEnd;
-(void)setCachedTCPInfoAtEnd:(NSDictionary *)arg1 ;
-(BOOL)needsCachedSubflowCounts;
-(void)setNeedsCachedSubflowCounts:(BOOL)arg1 ;
-(NSDictionary *)cachedSubflowCounts;
-(void)setCachedSubflowCounts:(NSDictionary *)arg1 ;
@end

