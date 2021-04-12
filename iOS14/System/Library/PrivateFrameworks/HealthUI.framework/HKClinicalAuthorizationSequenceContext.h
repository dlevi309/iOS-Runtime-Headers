/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKClinicalSourceAuthorizationController, NSString, HKSource;

@interface HKClinicalAuthorizationSequenceContext : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;
	NSString* _readUsageDescription;
	HKSource* _source;

}

@property (nonatomic,retain) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) HKSource * source;                                                                //@synthesize source=_source - In the implementation block
-(NSString *)readUsageDescription;
-(void)setSource:(HKSource *)arg1 ;
-(void)setAuthorizationController:(HKClinicalSourceAuthorizationController *)arg1 ;
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(HKSource *)source;
-(HKClinicalSourceAuthorizationController *)authorizationController;
@end

