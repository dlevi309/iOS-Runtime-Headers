/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTitledBuddyViewController.h>

@class _HKMedicalIDData, NSString;

@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController {

	_HKMedicalIDData* _medicalIDData;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;

}

@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;              //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;              //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
-(id)registrationCompletionHandler;
-(_HKMedicalIDData *)medicalIDData;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(id)initWithMedicalIDData:(id)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
@end

