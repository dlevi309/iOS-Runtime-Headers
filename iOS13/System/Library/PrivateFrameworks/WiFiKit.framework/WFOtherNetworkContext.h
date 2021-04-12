/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFCredentialsContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>
#import <libobjc.A.dylib/WFOtherNetworkProviderContext.h>
#import <libobjc.A.dylib/WFOtherNetworkViewControllerDelegate.h>

@class NSArray, NSString, WFNetworkScanRecord, WFUserSuppliedNetwork, WFNetworkProfile;

@interface WFOtherNetworkContext : WFCredentialsContext <WFContextPresenting, WFOtherNetworkProviderContext, WFOtherNetworkViewControllerDelegate> {

	BOOL passwordSharingSupported;
	NSArray* _availableTLSIdentities;
	long long _requestedFields;
	NSString* username;
	WFNetworkScanRecord* _network;
	long long _availableAuthTraits;
	WFUserSuppliedNetwork* _userSuppliedNetwork;
	NSArray* _WAPIRootCertificates;
	NSArray* _WAPIIdentities;
	WFNetworkProfile* _profile;
	unsigned long long _type;

}

@property (nonatomic,retain) NSArray * WAPIRootCertificates;                                                 //@synthesize WAPIRootCertificates=_WAPIRootCertificates - In the implementation block
@property (nonatomic,retain) NSArray * WAPIIdentities;                                                       //@synthesize WAPIIdentities=_WAPIIdentities - In the implementation block
@property (nonatomic,retain) NSArray * availableTLSIdentities;                                               //@synthesize availableTLSIdentities=_availableTLSIdentities - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                                      //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                                  //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long availableAuthTraits;                                                  //@synthesize availableAuthTraits=_availableAuthTraits - In the implementation block
@property (nonatomic,retain) WFUserSuppliedNetwork * userSuppliedNetwork;                                    //@synthesize userSuppliedNetwork=_userSuppliedNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider; 
@property (nonatomic,readonly) BOOL needsDismissal; 
@property (getter=isPasswordSharingSupported,nonatomic,readonly) BOOL passwordSharingSupported; 
@property (nonatomic,readonly) NSString * username; 
@property (getter=isEnterprise,nonatomic,readonly) BOOL enterprise; 
@property (getter=isWeakSecurity,nonatomic,readonly) BOOL weakSecurity; 
@property (nonatomic,readonly) BOOL WAPIEnabled; 
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(NSString *)username;
-(long long)securityMode;
-(long long)requestedFields;
-(void)setRequestedFields:(long long)arg1 ;
-(void)gatherCredentials:(/*^block*/id)arg1 ;
-(BOOL)isEnterprise;
-(void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 authTraits:(long long)arg2 ;
-(WFUserSuppliedNetwork *)userSuppliedNetwork;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(NSArray *)WAPIRootCertificates;
-(void)setUserSuppliedNetwork:(WFUserSuppliedNetwork *)arg1 ;
-(void)_updateActivityStringForError:(id)arg1 networkName:(id)arg2 ;
-(BOOL)isPasswordSharingSupported;
-(NSArray *)availableTLSIdentities;
-(long long)availableAuthTraits;
-(NSArray *)WAPIIdentities;
-(void)otherNetworkViewControllerUserDidTapJoin:(id)arg1 ;
-(void)otherNetworkViewControllerUserDidTapCancel:(id)arg1 ;
-(BOOL)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2 ;
-(void)setAvailableTLSIdentities:(NSArray *)arg1 ;
-(void)setAvailableAuthTraits:(long long)arg1 ;
-(void)setWAPIRootCertificates:(NSArray *)arg1 ;
-(void)setWAPIIdentities:(NSArray *)arg1 ;
@end

