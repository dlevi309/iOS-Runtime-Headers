/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)devicePaymentApplications;
-(void)setDevicePaymentApplications:(NSArray *)arg1 ;
-(void)setApplets:(NSArray *)arg1 ;
-(NSDictionary *)credentialsForAID;
-(void)setCredentialsForAID:(NSDictionary *)arg1 ;
@end

