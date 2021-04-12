/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSString;

@interface ICURLPerformanceMetrics : NSObject {

	BOOL _cachedResponse;
	BOOL _connectionReused;
	double _connectionStartTime;
	double _connectionEndTime;
	double _domainLookupStartTime;
	double _domainLookupEndTime;
	double _fetchStartTime;
	double _requestStartTime;
	double _responseStartTime;
	double _responseEndTime;
	double _secureConnectionStartTime;
	NSString* _appleTimingApp;
	NSString* _connectionType;
	NSString* _edgeNodeCacheStatus;
	NSString* _environmentDataCenter;
	NSString* _responseDate;
	unsigned long long _statusCode;
	unsigned long long _redirectCount;
	unsigned long long _requestMessageSize;
	NSString* _requestUrl;
	NSString* _resolvedIPAddress;
	unsigned long long _responseMessageSize;

}

@property (nonatomic,readonly) double connectionStartTime;                          //@synthesize connectionStartTime=_connectionStartTime - In the implementation block
@property (nonatomic,readonly) double connectionEndTime;                            //@synthesize connectionEndTime=_connectionEndTime - In the implementation block
@property (nonatomic,readonly) double domainLookupStartTime;                        //@synthesize domainLookupStartTime=_domainLookupStartTime - In the implementation block
@property (nonatomic,readonly) double domainLookupEndTime;                          //@synthesize domainLookupEndTime=_domainLookupEndTime - In the implementation block
@property (nonatomic,readonly) double fetchStartTime;                               //@synthesize fetchStartTime=_fetchStartTime - In the implementation block
@property (nonatomic,readonly) double requestStartTime;                             //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) double responseStartTime;                            //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,readonly) double responseEndTime;                              //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (nonatomic,readonly) double secureConnectionStartTime;                    //@synthesize secureConnectionStartTime=_secureConnectionStartTime - In the implementation block
@property (nonatomic,readonly) BOOL cachedResponse;                                 //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (nonatomic,readonly) BOOL connectionReused;                               //@synthesize connectionReused=_connectionReused - In the implementation block
@property (nonatomic,readonly) NSString * appleTimingApp;                           //@synthesize appleTimingApp=_appleTimingApp - In the implementation block
@property (nonatomic,readonly) NSString * connectionType;                           //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) NSString * edgeNodeCacheStatus;                      //@synthesize edgeNodeCacheStatus=_edgeNodeCacheStatus - In the implementation block
@property (nonatomic,readonly) NSString * environmentDataCenter;                    //@synthesize environmentDataCenter=_environmentDataCenter - In the implementation block
@property (nonatomic,readonly) NSString * responseDate;                             //@synthesize responseDate=_responseDate - In the implementation block
@property (nonatomic,readonly) unsigned long long statusCode;                       //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) unsigned long long redirectCount;                    //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestMessageSize;               //@synthesize requestMessageSize=_requestMessageSize - In the implementation block
@property (nonatomic,readonly) NSString * requestUrl;                               //@synthesize requestUrl=_requestUrl - In the implementation block
@property (nonatomic,readonly) NSString * resolvedIPAddress;                        //@synthesize resolvedIPAddress=_resolvedIPAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long responseMessageSize;              //@synthesize responseMessageSize=_responseMessageSize - In the implementation block
-(double)fetchStartTime;
-(double)responseEndTime;
-(double)domainLookupStartTime;
-(double)domainLookupEndTime;
-(NSString *)connectionType;
-(double)connectionEndTime;
-(double)secureConnectionStartTime;
-(NSString *)requestUrl;
-(id)initWithTransactionMetrics:(id)arg1 request:(id)arg2 ;
-(NSString *)appleTimingApp;
-(BOOL)connectionReused;
-(double)responseStartTime;
-(unsigned long long)statusCode;
-(unsigned long long)requestMessageSize;
-(unsigned long long)redirectCount;
-(NSString *)edgeNodeCacheStatus;
-(NSString *)responseDate;
-(double)requestStartTime;
-(double)connectionStartTime;
-(BOOL)cachedResponse;
-(NSString *)environmentDataCenter;
-(unsigned long long)responseMessageSize;
-(NSString *)resolvedIPAddress;
@end

