/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSITunesStore.h>

@protocol IKJSITunesStore <JSExport>
@end

#import <libobjc.A.dylib/_IKJSITunesStoreProxy.h>
#import <libobjc.A.dylib/_IKJSITunesStore.h>

@class NSString, NSDictionary, NSNumber, SSMetricsController, IKURLBagCache;

@interface IKJSITunesStore : IKJSObject <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore> {

	NSNumber* _lastAccountDSID;
	NSDictionary* _lastKnownStatusDictionary;
	SSMetricsController* _metricsController;
	NSString* _storeFrontSuffix;
	id _ssAccountStoreChangedToken;
	id _subscriptionStatusDidChangeToken;
	id _urlBagCacheUpdateToken;
	NSString* _cookieURL;
	IKURLBagCache* _bagCache;

}

@property (nonatomic,retain) IKURLBagCache * bagCache;                                   //@synthesize bagCache=_bagCache - In the implementation block
@property (nonatomic,retain) NSString * cookieURL;                                       //@synthesize cookieURL=_cookieURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
+(void)setITunesStoreHeaders:(id)arg1 ;
+(void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2 ;
-(void)dealloc;
-(NSString *)storefront;
-(NSString *)userAgent;
-(void)setCookie:(id)arg1 ;
-(void)setStorefront:(NSString *)arg1 ;
-(BOOL)isManagedAppleID;
-(NSString *)DSID;
-(NSDictionary *)accountInfo;
-(id)cookie;
-(IKURLBagCache *)bagCache;
-(id)eligibilityForService:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2 ;
-(void)flushUnreportedEvents;
-(void)clearCookies;
-(void)getServiceEligibility:(id)arg1 :(id)arg2 ;
-(void)loadStoreContent:(id)arg1 :(id)arg2 ;
-(void)evaluateScripts:(id)arg1 :(id)arg2 ;
-(void)authenticate:(id)arg1 :(id)arg2 ;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg1 ;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2 ;
-(void)_bagCacheUpdated;
-(void)_accountStoreChanged;
-(void)_subscriptionStatusDidChanged:(id)arg1 ;
-(id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)asPrivateIKJSITunesStore;
-(void)setBagCache:(IKURLBagCache *)arg1 ;
@end

