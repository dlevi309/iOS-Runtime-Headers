/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(id)registrationCompletionHandler;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(id)initWithMedicalIDData:(id)arg1 ;
@end

