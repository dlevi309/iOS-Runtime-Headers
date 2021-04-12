/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
*/

#import <Preferences/PSViewController.h>

@class NSString, UITextView;

@interface SUSSoftwareUpdateLicenseViewController : PSViewController {

	NSString* _licenseTextInfo;
	UITextView* _licenseTextView;

}

@property (nonatomic,retain) NSString * licenseTextInfo;                //@synthesize licenseTextInfo=_licenseTextInfo - In the implementation block
@property (nonatomic,retain) UITextView * licenseTextView;              //@synthesize licenseTextView=_licenseTextView - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithLicense:(id)arg1 ;
-(void)setLicenseText:(id)arg1 ;
-(NSString *)licenseTextInfo;
-(void)setLicenseTextInfo:(NSString *)arg1 ;
-(UITextView *)licenseTextView;
-(void)setLicenseTextView:(UITextView *)arg1 ;
@end

