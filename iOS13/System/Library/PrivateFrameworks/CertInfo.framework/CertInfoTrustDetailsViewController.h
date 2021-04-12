/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface CertInfoTrustDetailsViewController : UIViewController {

	NSArray* _trustProperties;

}

@property (nonatomic,retain) NSArray * trustProperties;              //@synthesize trustProperties=_trustProperties - In the implementation block
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(NSArray *)trustProperties;
-(void)_setupNavItem;
-(void)setTrustProperties:(NSArray *)arg1 ;
@end

