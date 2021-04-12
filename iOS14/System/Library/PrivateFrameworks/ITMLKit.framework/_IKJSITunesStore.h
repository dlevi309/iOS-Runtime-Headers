/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, NSDictionary;


@protocol _IKJSITunesStore <IKJSITunesStore,JSExport>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@required
-(BOOL)isManagedAppleID;
-(id)cookie;
-(NSString *)storefront;
-(NSString *)DSID;
-(void)setStorefront:(id)arg1;
-(void)setCookie:(id)arg1;
-(NSString *)networkConnectionType;
-(NSDictionary *)accountInfo;
-(id)getBag;
-(void)signOut;
-(NSString *)userAgent;
-(id)eligibilityForService:(id)arg1;
-(void)flushUnreportedEvents;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2;
-(void)clearCookies;
-(void)getServiceEligibility:(id)arg1 :(id)arg2;
-(void)loadStoreContent:(id)arg1 :(id)arg2;
-(void)evaluateScripts:(id)arg1 :(id)arg2;
-(void)authenticate:(id)arg1 :(id)arg2;
-(void)updateServiceEligibility:(id)arg1;
-(void)fetchMarketingItem:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
-(void)openMarketingItem:(id)arg1 :(id)arg2 :(id)arg3;
-(void)openDynamicUIURL:(id)arg1 :(id)arg2 :(id)arg3;
-(NSString *)cookieURL;
-(void)setCookieURL:(id)arg1;

@end

