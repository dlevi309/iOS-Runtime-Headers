/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString, NSNumber, VSAccountAuthentication, NSSet, NSArray;

@interface VSApplicationControllerResponse : NSObject {

	NSString* _authenticationScheme;
	NSString* _responseStatusCode;
	NSString* _responseString;
	NSNumber* _expectedAction;
	VSAccountAuthentication* _accountAuthentication;
	NSSet* _accountChannelIDs;
	NSArray* _subscriptionsToAdd;
	NSArray* _subscriptionsToRemoveByBundleID;

}

@property (nonatomic,copy) NSString * authenticationScheme;                                //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy) NSString * responseStatusCode;                                  //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,copy) NSString * responseString;                                      //@synthesize responseString=_responseString - In the implementation block
@property (nonatomic,copy) NSNumber * expectedAction;                                      //@synthesize expectedAction=_expectedAction - In the implementation block
@property (nonatomic,retain) VSAccountAuthentication * accountAuthentication;              //@synthesize accountAuthentication=_accountAuthentication - In the implementation block
@property (nonatomic,copy) NSSet * accountChannelIDs;                                      //@synthesize accountChannelIDs=_accountChannelIDs - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToAdd;                                   //@synthesize subscriptionsToAdd=_subscriptionsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToRemoveByBundleID;                      //@synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID - In the implementation block
-(NSString *)responseStatusCode;
-(id)description;
-(void)setResponseStatusCode:(NSString *)arg1 ;
-(NSString *)authenticationScheme;
-(void)setAuthenticationScheme:(NSString *)arg1 ;
-(NSString *)responseString;
-(void)setResponseString:(NSString *)arg1 ;
-(NSNumber *)expectedAction;
-(NSArray *)subscriptionsToAdd;
-(NSArray *)subscriptionsToRemoveByBundleID;
-(void)setSubscriptionsToAdd:(NSArray *)arg1 ;
-(void)setSubscriptionsToRemoveByBundleID:(NSArray *)arg1 ;
-(void)setExpectedAction:(NSNumber *)arg1 ;
-(void)setAccountChannelIDs:(NSSet *)arg1 ;
-(void)setAccountAuthentication:(VSAccountAuthentication *)arg1 ;
-(VSAccountAuthentication *)accountAuthentication;
-(NSSet *)accountChannelIDs;
@end

