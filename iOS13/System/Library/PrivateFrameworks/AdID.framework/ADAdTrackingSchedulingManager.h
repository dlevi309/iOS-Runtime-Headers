/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol NSObject;
@class APSConnection, NSString;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate> {

	BOOL _isConfigRequestInFlight;
	id<NSObject> _storeFrontNotifyToken;
	id<NSObject> _accountChangedNotifyToken;
	APSConnection* _pushConnection;

}

@property (nonatomic,retain) id<NSObject> storeFrontNotifyToken;                  //@synthesize storeFrontNotifyToken=_storeFrontNotifyToken - In the implementation block
@property (nonatomic,retain) id<NSObject> accountChangedNotifyToken;              //@synthesize accountChangedNotifyToken=_accountChangedNotifyToken - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnection;                      //@synthesize pushConnection=_pushConnection - In the implementation block
@property (assign,nonatomic) BOOL isConfigRequestInFlight;                        //@synthesize isConfigRequestInFlight=_isConfigRequestInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(APSConnection *)pushConnection;
-(BOOL)isAdEnabledLocality;
-(void)handleAccountChange;
-(void)refreshConfiguration:(/*^block*/id)arg1 ;
-(void)handleConfiguration;
-(void)pushEnable;
-(void)forceExpiration;
-(BOOL)isConfigRequestInFlight;
-(void)setIsConfigRequestInFlight:(BOOL)arg1 ;
-(id)currentBundleID;
-(void)pushDisable;
-(id<NSObject>)storeFrontNotifyToken;
-(void)setStoreFrontNotifyToken:(id<NSObject>)arg1 ;
-(id<NSObject>)accountChangedNotifyToken;
-(void)setAccountChangedNotifyToken:(id<NSObject>)arg1 ;
@end

