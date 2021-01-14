/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckDeviceState : NSObject {

	NSArray* _applets;
	NSArray* _devicePaymentApplications;
	NSDictionary* _credentialsForAID;

}

@property (nonatomic,copy) NSArray * applets;                                //@synthesize applets=_applets - In the implementation block
@property (nonatomic,copy) NSArray * devicePaymentApplications;              //@synthesize devicePaymentApplications=_devicePaymentApplications - In the implementation block
@property (nonatomic,copy) NSDictionary * credentialsForAID;                 //@synthesize credentialsForAID=_credentialsForAID - In the implementation block
-(NSArray *)applets;
-(void)setApplets:(NSArray *)arg1 ;
-(NSDictionary *)credentialsForAID;
-(void)setCredentialsForAID:(NSDictionary *)arg1 ;
-(void)setDevicePaymentApplications:(NSArray *)arg1 ;
-(NSArray *)devicePaymentApplications;
@end

