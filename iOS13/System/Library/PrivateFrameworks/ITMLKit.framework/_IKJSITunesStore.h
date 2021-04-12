/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)storefront;
-(NSString *)userAgent;
-(void)setCookie:(id)arg1;
-(void)setStorefront:(id)arg1;
-(BOOL)isManagedAppleID;
-(NSString *)DSID;
-(NSDictionary *)accountInfo;
-(id)cookie;
-(id)eligibilityForService:(id)arg1;
-(id)getBag;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2;
-(void)flushUnreportedEvents;
-(void)clearCookies;
-(void)getServiceEligibility:(id)arg1 :(id)arg2;
-(void)loadStoreContent:(id)arg1 :(id)arg2;
-(void)evaluateScripts:(id)arg1 :(id)arg2;
-(void)authenticate:(id)arg1 :(id)arg2;
-(void)signOut;
-(void)updateServiceEligibility:(id)arg1;
-(NSString *)networkConnectionType;
-(NSString *)cookieURL;
-(void)setCookieURL:(id)arg1;

@end

