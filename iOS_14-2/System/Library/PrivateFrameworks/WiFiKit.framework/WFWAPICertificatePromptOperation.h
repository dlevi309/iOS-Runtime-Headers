/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>
#import <libobjc.A.dylib/WFOtherNetworkViewControllerDelegate.h>

@class NSData, UIViewController, WFNetworkScanRecord, WFOtherNetworkViewController, UINavigationController, NSArray, NSString;

@interface WFWAPICertificatePromptOperation : WFOperation <WFOtherNetworkViewControllerDelegate> {

	BOOL _userCancelled;
	SecIdentityRef _WAPIRootCertificate;
	NSData* _WAPIIdentityPEMBlob;
	UIViewController* _rootViewController;
	WFNetworkScanRecord* _network;
	WFOtherNetworkViewController* _promptViewController;
	UINavigationController* _navigationController;
	NSArray* _wapiIdentityMapping;

}

@property (assign,nonatomic) BOOL userCancelled;                                               //@synthesize userCancelled=_userCancelled - In the implementation block
@property (assign,nonatomic) SecIdentityRef WAPIRootCertificate;                               //@synthesize WAPIRootCertificate=_WAPIRootCertificate - In the implementation block
@property (nonatomic,retain) NSData * WAPIIdentityPEMBlob;                                     //@synthesize WAPIIdentityPEMBlob=_WAPIIdentityPEMBlob - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                            //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                    //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) WFOtherNetworkViewController * promptViewController;              //@synthesize promptViewController=_promptViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSArray * wapiIdentityMapping;                                    //@synthesize wapiIdentityMapping=_wapiIdentityMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(void)start;
-(WFNetworkScanRecord *)network;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(UINavigationController *)navigationController;
-(id)initWithRootViewController:(id)arg1 network:(id)arg2 ;
-(BOOL)userCancelled;
-(SecIdentityRef)WAPIRootCertificate;
-(NSData *)WAPIIdentityPEMBlob;
-(void)otherNetworkViewControllerUserDidTapJoin:(id)arg1 ;
-(void)otherNetworkViewControllerUserDidTapCancel:(id)arg1 ;
-(BOOL)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2 ;
-(void)setPromptViewController:(WFOtherNetworkViewController *)arg1 ;
-(WFOtherNetworkViewController *)promptViewController;
-(void)setUserCancelled:(BOOL)arg1 ;
-(void)setWAPIIdentityPEMBlob:(NSData *)arg1 ;
-(void)setWAPIRootCertificate:(SecIdentityRef)arg1 ;
-(NSArray *)wapiIdentityMapping;
-(void)setWapiIdentityMapping:(NSArray *)arg1 ;
@end

