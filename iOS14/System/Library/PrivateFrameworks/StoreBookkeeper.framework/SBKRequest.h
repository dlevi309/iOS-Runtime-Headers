/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSURL, NSString, NSData, NSDictionary, ISDataProvider, SBKTransaction;

@interface SBKRequest : NSObject {

	BOOL _shouldAuthenticate;
	NSURL* _requestURL;
	NSString* _action;
	NSData* _bodyData;
	long long _bodyContentType;
	NSDictionary* _headers;
	NSDictionary* _arguments;
	long long _method;
	ISDataProvider* _responseDataProvider;
	BOOL _concurrent;
	BOOL _includeDeviceGUID;
	SBKTransaction* _transaction;

}

@property (nonatomic,retain) SBKTransaction * transaction;                       //@synthesize transaction=_transaction - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) BOOL concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (assign,nonatomic) BOOL shouldAuthenticate;                            //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL includeDeviceGUID;                             //@synthesize includeDeviceGUID=_includeDeviceGUID - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                  //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) ISDataProvider * responseDataProvider;              //@synthesize responseDataProvider=_responseDataProvider - In the implementation block
+(id)requestWithRequestURL:(id)arg1 ;
+(id)_methodStringForMethod:(long long)arg1 ;
+(long long)bodyContentEncodingType;
+(long long)bodyContentType;
+(id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1 ;
+(id)_contentTypeStringForBodyContentType:(long long)arg1 ;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(SBKTransaction *)transaction;
-(long long)method;
-(void)setBodyData:(NSData *)arg1 ;
-(double)timeoutInterval;
-(id)description;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(BOOL)shouldAuthenticate;
-(void)setMethod:(long long)arg1 ;
-(NSData *)bodyData;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(BOOL)isConcurrent;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(BOOL)acceptsGzipEncoding;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(void)setBodyDataWithPropertyList:(id)arg1 ;
-(void)setIncludeDeviceGUID:(BOOL)arg1 ;
-(id)newURLOperation;
-(id)copyRequestProperties;
-(ISDataProvider *)responseDataProvider;
-(id)initWithRequestURL:(id)arg1 ;
-(id)_defaultHeaderFields;
-(void)setResponseDataProvider:(ISDataProvider *)arg1 ;
-(BOOL)includeDeviceGUID;
-(id)descriptionWithoutHeaderFields;
@end

