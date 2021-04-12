/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <UIKitCore/UIViewController.h>

@protocol CertInfoSheetViewControllerDelegate;
@class NSString, NSDate, NSArray;

@interface CertInfoSheetViewController : UIViewController {

	NSString* _serviceName;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _trustPurpose;
	NSDate* _trustExpiration;
	NSArray* _trustProperties;
	id<CertInfoSheetViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * trustTitle;                                                //@synthesize trustTitle=_trustTitle - In the implementation block
@property (nonatomic,retain) NSString * trustSubtitle;                                             //@synthesize trustSubtitle=_trustSubtitle - In the implementation block
@property (nonatomic,retain) NSString * trustPurpose;                                              //@synthesize trustPurpose=_trustPurpose - In the implementation block
@property (nonatomic,retain) NSDate * trustExpiration;                                             //@synthesize trustExpiration=_trustExpiration - In the implementation block
@property (nonatomic,retain) NSArray * trustProperties;                                            //@synthesize trustProperties=_trustProperties - In the implementation block
@property (assign,nonatomic,__weak) id<CertInfoSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CertInfoSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CertInfoSheetViewControllerDelegate>)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_cancel;
-(NSArray *)trustProperties;
-(void)_setupNavItem;
-(void)setTrustProperties:(NSArray *)arg1 ;
-(void)_dismissWithResult:(int)arg1 ;
-(void)_accept;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(NSString *)trustPurpose;
-(NSDate *)trustExpiration;
-(void)_pushDetailsView;
-(void)setTrustPurpose:(NSString *)arg1 ;
-(void)setTrustExpiration:(NSDate *)arg1 ;
@end

