/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didReceiveMemoryWarning;
-(id)initWithLicense:(id)arg1 ;
-(void)setLicenseText:(id)arg1 ;
-(NSString *)licenseTextInfo;
-(void)setLicenseTextInfo:(NSString *)arg1 ;
-(UITextView *)licenseTextView;
-(void)setLicenseTextView:(UITextView *)arg1 ;
@end

