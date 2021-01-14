/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSString, NSData, NSObject, NSInputStream, NSArray, NSURL;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSSecureCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _additionalMetrics;
	long long _allowedRetryCount;
	BOOL _allowsBootstrapCellularData;
	unsigned long long _cachePolicy;
	NSString* _clientAuditBundleIdentifier;
	NSData* _clientAuditTokenData;
	NSString* _clientIdentifier;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _expectedContentLength;
	NSData* _httpBody;
	NSInputStream* _httpBodyStream;
	NSDictionary* _httpHeaders;
	NSString* _httpMethod;
	BOOL _isITunesStoreRequest;
	long long _kbsyncType;
	BOOL _largeDownload;
	long long _machineDataStyle;
	unsigned long long _networkServiceType;
	NSDictionary* _requestParameters;
	BOOL _requiresCellularDataNetwork;
	char _requiresExtendedValidationCertificates;
	BOOL _requiresExternal;
	BOOL _requiresHTTPS;
	BOOL _shouldDecodeResponse;
	BOOL _shouldDisableCellular;
	BOOL _shouldDisableCellularFallback;
	BOOL _shouldDisableReversePush;
	BOOL _shouldDisableReversePushSampling;
	BOOL _shouldProcessProtocol;
	BOOL _shouldSendSecureToken;
	BOOL _shouldSetCookies;
	double _timeoutInterval;
	NSString* _urlBagKey;
	long long _urlBagType;
	/*^block*/id _urlBagURLBlock;
	NSArray* _urls;
	NSArray* _userAgentComponents;

}

@property (copy,readonly) NSDictionary * additionalMetrics; 
@property (readonly) BOOL allowsBootstrapCellularData; 
@property (readonly) BOOL canBeResolved; 
@property (copy,readonly) NSString * clientAuditBundleIdentifier; 
@property (copy,readonly) NSData * clientAuditTokenData; 
@property (readonly) NSString * clientBundleIdentifier; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) long long KBSyncType; 
@property (getter=isLargeDownload,readonly) BOOL largeDownload; 
@property (readonly) BOOL requiresCellularDataNetwork; 
@property (readonly) BOOL requiresExtendedValidationCertificates; 
@property (readonly) BOOL requiresExternal; 
@property (readonly) BOOL requiresHTTPS; 
@property (readonly) BOOL shouldAddKBSyncData; 
@property (readonly) BOOL shouldDecodeResponse; 
@property (readonly) BOOL shouldDisableCellularFallback; 
@property (readonly) BOOL shouldDisableCellular; 
@property (readonly) BOOL shouldDisableReversePush; 
@property (readonly) BOOL shouldDisableReversePushSampling; 
@property (readonly) BOOL shouldProcessProtocol; 
@property (readonly) BOOL shouldSendSecureToken; 
@property (readonly) BOOL shouldSetCookies; 
@property (readonly) long long URLBagType; 
@property (copy,readonly) id URLBagURLBlock; 
@property (copy,readonly) NSArray * URLs; 
@property (readonly) long long allowedRetryCount; 
@property (copy,readonly) NSString * clientIdentifier; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSData * HTTPBody; 
@property (copy,readonly) NSDictionary * HTTPHeaders; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest; 
@property (readonly) long long machineDataStyle; 
@property (readonly) unsigned long long networkServiceType; 
@property (copy,readonly) NSDictionary * requestParameters; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSString * URLBagKey; 
@property (retain,readonly) NSURL * URL; 
@property (copy,readonly) NSArray * userAgentComponents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)allowsBootstrapCellularData;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)clientBundleIdentifier;
-(NSString *)URLBagKey;
-(NSString *)HTTPMethod;
-(id)_initCommon;
-(long long)URLBagType;
-(id)init;
-(NSInputStream *)HTTPBodyStream;
-(id)initWithURL:(id)arg1 ;
-(NSDictionary *)HTTPHeaders;
-(BOOL)canBeResolved;
-(BOOL)isLargeDownload;
-(BOOL)shouldProcessProtocol;
-(NSString *)clientAuditBundleIdentifier;
-(BOOL)shouldSendSecureToken;
-(long long)KBSyncType;
-(BOOL)requiresCellularDataNetwork;
-(BOOL)requiresExternal;
-(BOOL)requiresHTTPS;
-(BOOL)requiresExtendedValidationCertificates;
-(BOOL)shouldAddKBSyncData;
-(BOOL)shouldDisableCellularFallback;
-(BOOL)shouldDisableReversePush;
-(BOOL)shouldDisableReversePushSampling;
-(id)URLBagURLBlock;
-(unsigned long long)networkServiceType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(NSDictionary *)additionalMetrics;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)timeoutInterval;
-(BOOL)isITunesStoreRequest;
-(NSString *)description;
-(long long)machineDataStyle;
-(id)copyURLRequest;
-(NSArray *)URLs;
-(unsigned long long)cachePolicy;
-(NSURL *)URL;
-(BOOL)shouldDecodeResponse;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldSetCookies;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)HTTPBody;
-(NSDictionary *)requestParameters;
-(NSData *)clientAuditTokenData;
-(long long)expectedContentLength;
-(NSString *)clientIdentifier;
-(NSArray *)userAgentComponents;
-(long long)allowedRetryCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

