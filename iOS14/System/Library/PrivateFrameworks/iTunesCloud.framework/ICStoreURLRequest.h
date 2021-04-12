/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLRequest.h>

@class NSString, NSDictionary, NSArray, ICJSSignConfiguration, ICStoreRequestContext;

@interface ICStoreURLRequest : ICURLRequest {

	BOOL _shouldUseMescalSigning;
	BOOL _shouldParseBodyData;
	BOOL _shouldRequireURLBag;
	long long _anisetteVersion;
	NSString* _machineDataSyncState;
	NSDictionary* _additionalHTTPCookies;
	NSArray* _additionalQueryItems;
	ICJSSignConfiguration* _JSSignConfiguration;

}

@property (nonatomic,copy,readonly) ICStoreRequestContext * storeRequestContext; 
@property (assign,nonatomic) long long anisetteVersion;                                       //@synthesize anisetteVersion=_anisetteVersion - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMescalSigning;                                     //@synthesize shouldUseMescalSigning=_shouldUseMescalSigning - In the implementation block
@property (assign,nonatomic) BOOL shouldParseBodyData;                                        //@synthesize shouldParseBodyData=_shouldParseBodyData - In the implementation block
@property (assign,nonatomic) BOOL shouldRequireURLBag;                                        //@synthesize shouldRequireURLBag=_shouldRequireURLBag - In the implementation block
@property (nonatomic,copy) NSString * machineDataSyncState;                                   //@synthesize machineDataSyncState=_machineDataSyncState - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHTTPCookies;                              //@synthesize additionalHTTPCookies=_additionalHTTPCookies - In the implementation block
@property (nonatomic,copy) NSArray * additionalQueryItems;                                    //@synthesize additionalQueryItems=_additionalQueryItems - In the implementation block
@property (nonatomic,copy) ICJSSignConfiguration * JSSignConfiguration;                       //@synthesize JSSignConfiguration=_JSSignConfiguration - In the implementation block
+(id)currentConnectionTypeHeader;
+(Class)_responseHandlerClass;
+(BOOL)_shouldPersonalizeRequestForClientInfo:(id)arg1 personalizationStyle:(long long)arg2 ;
+(unsigned long long)_defaultMaxRetryCountForReason:(id)arg1 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldParseBodyData;
-(void)setMachineDataSyncState:(NSString *)arg1 ;
-(void)setShouldParseBodyData:(BOOL)arg1 ;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(BOOL)shouldUseMescalSigning;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(long long)anisetteVersion;
-(void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)machineDataSyncState;
-(void)setJSSignConfiguration:(ICJSSignConfiguration *)arg1 ;
-(void)setAdditionalQueryItems:(NSArray *)arg1 ;
-(NSDictionary *)additionalHTTPCookies;
-(ICJSSignConfiguration *)JSSignConfiguration;
-(BOOL)_shouldPersonalizeRequest;
-(ICStoreRequestContext *)storeRequestContext;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(BOOL)shouldRequireURLBag;
-(void)setAnisetteVersion:(long long)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(NSArray *)additionalQueryItems;
-(void)setShouldRequireURLBag:(BOOL)arg1 ;
-(void)setShouldUseMescalSigning:(BOOL)arg1 ;
-(id)description;
-(void)setAdditionalHTTPCookies:(NSDictionary *)arg1 ;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

