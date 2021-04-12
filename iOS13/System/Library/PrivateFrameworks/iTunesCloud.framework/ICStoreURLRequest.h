/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLRequest.h>

@class NSString, NSDictionary, ICJSSignConfiguration, ICStoreRequestContext;

@interface ICStoreURLRequest : ICURLRequest {

	BOOL _shouldUseMescalSigning;
	BOOL _shouldParseBodyData;
	BOOL _shouldRequireURLBag;
	BOOL _shouldApplyAuthKitHeaders;
	long long _anisetteVersion;
	NSString* _machineDataSyncState;
	NSDictionary* _additionalHTTPCookies;
	ICJSSignConfiguration* _JSSignConfiguration;

}

@property (nonatomic,copy,readonly) ICStoreRequestContext * storeRequestContext; 
@property (assign,nonatomic) long long anisetteVersion;                                       //@synthesize anisetteVersion=_anisetteVersion - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMescalSigning;                                     //@synthesize shouldUseMescalSigning=_shouldUseMescalSigning - In the implementation block
@property (assign,nonatomic) BOOL shouldParseBodyData;                                        //@synthesize shouldParseBodyData=_shouldParseBodyData - In the implementation block
@property (assign,nonatomic) BOOL shouldRequireURLBag;                                        //@synthesize shouldRequireURLBag=_shouldRequireURLBag - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyAuthKitHeaders;                                  //@synthesize shouldApplyAuthKitHeaders=_shouldApplyAuthKitHeaders - In the implementation block
@property (nonatomic,copy) NSString * machineDataSyncState;                                   //@synthesize machineDataSyncState=_machineDataSyncState - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHTTPCookies;                              //@synthesize additionalHTTPCookies=_additionalHTTPCookies - In the implementation block
@property (nonatomic,copy) ICJSSignConfiguration * JSSignConfiguration;                       //@synthesize JSSignConfiguration=_JSSignConfiguration - In the implementation block
+(unsigned long long)_defaultMaxRetryCountForReason:(id)arg1 ;
+(id)currentConnectionTypeHeader;
-(id)description;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setShouldUseMescalSigning:(BOOL)arg1 ;
-(void)setAnisetteVersion:(long long)arg1 ;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(void)setJSSignConfiguration:(ICJSSignConfiguration *)arg1 ;
-(void)setAdditionalHTTPCookies:(NSDictionary *)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setShouldRequireURLBag:(BOOL)arg1 ;
-(void)setShouldParseBodyData:(BOOL)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldPersonalizeRequest;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)additionalHTTPCookies;
-(long long)anisetteVersion;
-(BOOL)shouldUseMescalSigning;
-(BOOL)shouldParseBodyData;
-(BOOL)shouldRequireURLBag;
-(BOOL)shouldApplyAuthKitHeaders;
-(void)setShouldApplyAuthKitHeaders:(BOOL)arg1 ;
-(NSString *)machineDataSyncState;
-(void)setMachineDataSyncState:(NSString *)arg1 ;
-(ICJSSignConfiguration *)JSSignConfiguration;
@end

