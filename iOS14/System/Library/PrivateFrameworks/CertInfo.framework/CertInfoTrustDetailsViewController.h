/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface CertInfoTrustDetailsViewController : UIViewController {

	NSArray* _trustProperties;

}

@property (nonatomic,retain) NSArray * trustProperties;              //@synthesize trustProperties=_trustProperties - In the implementation block
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(NSArray *)trustProperties;
-(void)_setupNavItem;
-(void)setTrustProperties:(NSArray *)arg1 ;
@end

