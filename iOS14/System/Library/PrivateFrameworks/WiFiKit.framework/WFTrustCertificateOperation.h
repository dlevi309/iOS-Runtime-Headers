/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFOperation.h>
#import <libobjc.A.dylib/TrustCertificateViewControllerDelegate.h>

@class NSArray, TrustCertificateViewController, UIViewController, NSString;

@interface WFTrustCertificateOperation : WFOperation <TrustCertificateViewControllerDelegate> {

	BOOL _accepted;
	NSArray* _certificateChain;
	TrustCertificateViewController* _trustVc;
	UIViewController* _rootViewController;

}

@property (nonatomic,retain) TrustCertificateViewController * trustVc;              //@synthesize trustVc=_trustVc - In the implementation block
@property (nonatomic,retain) NSArray * certificateChain;                            //@synthesize certificateChain=_certificateChain - In the implementation block
@property (assign,nonatomic) BOOL accepted;                                         //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                 //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setAccepted:(BOOL)arg1 ;
-(BOOL)accepted;
-(TrustCertificateViewController *)trustVc;
-(NSArray *)certificateChain;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(id)initWithCertificateChain:(id)arg1 rootViewController:(id)arg2 ;
-(void)setTrustVc:(TrustCertificateViewController *)arg1 ;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
@end

