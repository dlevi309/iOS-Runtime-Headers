/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFAccessoryViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/WFOtherNetworkProvider.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFOtherNetworkViewControllerDelegate, WFCredentialsProviderContext;
@class NSString, NSArray, NSOrderedSet, WFTextFieldCell, UIColor, WFValueListViewController;

@interface WFOtherNetworkViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, WFAccessoryViewController, UITextFieldDelegate, WFOtherNetworkProvider, WFNetworkView> {

	BOOL _wantsModalPresentation;
	BOOL _joining;
	BOOL _WAPIEnabled;
	BOOL _supportsWiFiPasswordSharing;
	BOOL _passwordRequired;
	BOOL _WPA3PersonalEnabled;
	BOOL _WPA3EnterpriseEnabled;
	BOOL _WPA2EnterpriseEnabledMFPCapable;
	BOOL _joinable;
	BOOL _overrideDefaultSecurity;
	BOOL _shouldCancelContextWhenViewDisappear;
	BOOL _isUsingRandomAddress;
	NSString* SSID;
	NSString* _activityString;
	long long _deviceCapability;
	id<WFOtherNetworkViewControllerDelegate> _delegate;
	NSString* _networkName;
	long long _securityMode;
	NSString* _username;
	NSString* _password;
	long long _profileMode;
	SecIdentityRef _TLSIdentity;
	NSArray* _TLSIdentities;
	NSArray* _WAPIRootCertificates;
	id _WAPIRootCertificate;
	NSArray* _WAPIIdentities;
	id _WAPIIdentity;
	NSString* _details;
	long long _style;
	NSOrderedSet* _sections;
	NSOrderedSet* _securityRows;
	WFTextFieldCell* _nameCell;
	WFTextFieldCell* _usernameCell;
	WFTextFieldCell* _passwordCell;
	UIColor* _backgroundColor;
	long long _firstResponderCell;
	WFTextFieldCell* _mostRecentFirstResponder;
	NSString* _defaultActivityString;
	id<WFCredentialsProviderContext> _context;
	WFValueListViewController* _securityTitlesValueVC;
	WFValueListViewController* _profileModeTitlesValueVC;
	NSString* _randomMACAddress;
	NSString* _hardwareMACAddress;

}

@property (assign) long long style;                                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL joinable;                                                         //@synthesize joinable=_joinable - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sections;                                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSOrderedSet * securityRows;                                           //@synthesize securityRows=_securityRows - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * nameCell;                                            //@synthesize nameCell=_nameCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * usernameCell;                                        //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) WFTextFieldCell * passwordCell;                                        //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long firstResponderCell;                                          //@synthesize firstResponderCell=_firstResponderCell - In the implementation block
@property (assign,nonatomic) WFTextFieldCell * mostRecentFirstResponder;                            //@synthesize mostRecentFirstResponder=_mostRecentFirstResponder - In the implementation block
@property (nonatomic,copy) NSString * defaultActivityString;                                        //@synthesize defaultActivityString=_defaultActivityString - In the implementation block
@property (assign,nonatomic) BOOL overrideDefaultSecurity;                                          //@synthesize overrideDefaultSecurity=_overrideDefaultSecurity - In the implementation block
@property (nonatomic,retain) id<WFCredentialsProviderContext> context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long deviceCapability;                                            //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,retain) WFValueListViewController * securityTitlesValueVC;                     //@synthesize securityTitlesValueVC=_securityTitlesValueVC - In the implementation block
@property (nonatomic,retain) WFValueListViewController * profileModeTitlesValueVC;                  //@synthesize profileModeTitlesValueVC=_profileModeTitlesValueVC - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelContextWhenViewDisappear;                             //@synthesize shouldCancelContextWhenViewDisappear=_shouldCancelContextWhenViewDisappear - In the implementation block
@property (assign,nonatomic) BOOL isUsingRandomAddress;                                             //@synthesize isUsingRandomAddress=_isUsingRandomAddress - In the implementation block
@property (nonatomic,copy) NSString * randomMACAddress;                                             //@synthesize randomMACAddress=_randomMACAddress - In the implementation block
@property (nonatomic,copy) NSString * hardwareMACAddress;                                           //@synthesize hardwareMACAddress=_hardwareMACAddress - In the implementation block
@property (assign,nonatomic,__weak) id<WFOtherNetworkViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * networkName;                                                  //@synthesize networkName=_networkName - In the implementation block
@property (assign,nonatomic) long long securityMode;                                                //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,copy) NSString * username;                                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                     //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) long long profileMode;                                                 //@synthesize profileMode=_profileMode - In the implementation block
@property (assign,nonatomic) BOOL WAPIEnabled;                                                      //@synthesize WAPIEnabled=_WAPIEnabled - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;                                            //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (nonatomic,retain) NSArray * TLSIdentities;                                               //@synthesize TLSIdentities=_TLSIdentities - In the implementation block
@property (nonatomic,retain) NSArray * WAPIRootCertificates;                                        //@synthesize WAPIRootCertificates=_WAPIRootCertificates - In the implementation block
@property (assign,nonatomic) id WAPIRootCertificate;                                                //@synthesize WAPIRootCertificate=_WAPIRootCertificate - In the implementation block
@property (nonatomic,retain) NSArray * WAPIIdentities;                                              //@synthesize WAPIIdentities=_WAPIIdentities - In the implementation block
@property (assign,nonatomic) id WAPIIdentity;                                                       //@synthesize WAPIIdentity=_WAPIIdentity - In the implementation block
@property (assign,nonatomic) BOOL joining;                                                          //@synthesize joining=_joining - In the implementation block
@property (assign,nonatomic) BOOL supportsWiFiPasswordSharing;                                      //@synthesize supportsWiFiPasswordSharing=_supportsWiFiPasswordSharing - In the implementation block
@property (nonatomic,retain) NSString * details;                                                    //@synthesize details=_details - In the implementation block
@property (assign,nonatomic) BOOL passwordRequired;                                                 //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (assign,nonatomic) BOOL WPA3PersonalEnabled;                                              //@synthesize WPA3PersonalEnabled=_WPA3PersonalEnabled - In the implementation block
@property (assign,nonatomic) BOOL WPA3EnterpriseEnabled;                                            //@synthesize WPA3EnterpriseEnabled=_WPA3EnterpriseEnabled - In the implementation block
@property (assign,nonatomic) BOOL WPA2EnterpriseEnabledMFPCapable;                                  //@synthesize WPA2EnterpriseEnabledMFPCapable=_WPA2EnterpriseEnabledMFPCapable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (assign,nonatomic) NSString * activityString;                                             //@synthesize activityString=_activityString - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation;                                         //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
-(NSString *)SSID;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)networkName;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setDetails:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_updateSections;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setWPA3PersonalEnabled:(BOOL)arg1 ;
-(id<WFOtherNetworkViewControllerDelegate>)delegate;
-(BOOL)wantsModalPresentation;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)_returnKeyType;
-(void)setSecurityMode:(long long)arg1 ;
-(NSOrderedSet *)sections;
-(void)setNetworkName:(NSString *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)passwordRequired;
-(void)setPasswordRequired:(BOOL)arg1 ;
-(void)_join:(id)arg1 ;
-(id<WFCredentialsProviderContext>)context;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(NSString *)password;
-(UIColor *)backgroundColor;
-(void)setRandomMACAddress:(NSString *)arg1 ;
-(NSString *)username;
-(long long)firstResponderCell;
-(void)setDelegate:(id<WFOtherNetworkViewControllerDelegate>)arg1 ;
-(void)_dismiss:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setPassword:(NSString *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setWAPIEnabled:(BOOL)arg1 ;
-(BOOL)joining;
-(NSString *)details;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(WFTextFieldCell *)nameCell;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(NSString *)hardwareMACAddress;
-(void)setWPA3EnterpriseEnabled:(BOOL)arg1 ;
-(NSString *)randomMACAddress;
-(long long)style;
-(void)orientationChanged:(id)arg1 ;
-(long long)securityMode;
-(void)dealloc;
-(void)setContext:(id<WFCredentialsProviderContext>)arg1 ;
-(void)setNameCell:(WFTextFieldCell *)arg1 ;
-(NSString *)activityString;
-(void)setActivityString:(NSString *)arg1 ;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(void)resetFirstResponder;
-(void)receiveSharedPassword:(id)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setJoining:(BOOL)arg1 ;
-(BOOL)supportsWiFiPasswordSharing;
-(id)WAPIRootCertificate;
-(id)initWithOtherNetworkProviderContext:(id)arg1 deviceCapability:(long long)arg2 ;
-(id)WAPIIdentity;
-(NSArray *)WAPIRootCertificates;
-(BOOL)WAPIEnabled;
-(NSArray *)WAPIIdentities;
-(void)setHardwareMACAddress:(NSString *)arg1 ;
-(void)setWAPIRootCertificates:(NSArray *)arg1 ;
-(void)setWAPIIdentities:(NSArray *)arg1 ;
-(id)initWithCredentialsProviderContext:(id)arg1 deviceCapability:(long long)arg2 ;
-(id)initWithOtherNetworkStyle:(long long)arg1 ;
-(void)setWAPIRootCertificate:(id)arg1 ;
-(void)setJoinable:(BOOL)arg1 ;
-(WFTextFieldCell *)usernameCell;
-(void)setUsernameCell:(WFTextFieldCell *)arg1 ;
-(WFTextFieldCell *)passwordCell;
-(void)setPasswordCell:(WFTextFieldCell *)arg1 ;
-(BOOL)joinable;
-(id)_sectionsForStyle:(long long)arg1 ;
-(id)_securityRowsForStyle:(long long)arg1 ;
-(void)_updateJoinable;
-(BOOL)WPA3PersonalEnabled;
-(void)setFirstResponderCell:(long long)arg1 ;
-(void)setDefaultActivityString:(NSString *)arg1 ;
-(void)keyboardShown:(id)arg1 ;
-(void)_scrollToCellAndBecomeFirstResponder:(id)arg1 ;
-(BOOL)isUsingRandomAddress;
-(long long)profileMode;
-(BOOL)_canShowModes;
-(void)setSecurityRows:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)securityRows;
-(void)setWAPIIdentity:(id)arg1 ;
-(WFValueListViewController *)securityTitlesValueVC;
-(id)_availableSecurityTitles;
-(id)_securityStringFromType:(long long)arg1 ;
-(long long)_securityModeFromTitle:(id)arg1 ;
-(void)setIsUsingRandomAddress:(BOOL)arg1 ;
-(void)setSecurityTitlesValueVC:(WFValueListViewController *)arg1 ;
-(void)_setTLSIdentity:(id)arg1 specifier:(id)arg2 ;
-(id)_getTLSIdentity:(id)arg1 ;
-(NSArray *)TLSIdentities;
-(void)_setWAPIIdentity:(id)arg1 specifier:(id)arg2 ;
-(id)_getWAPIIdentity:(id)arg1 ;
-(void)_setWAPIRootCertificate:(id)arg1 specifier:(id)arg2 ;
-(id)_getWAPIRootCertificate:(id)arg1 ;
-(WFValueListViewController *)profileModeTitlesValueVC;
-(id)_availableProfileModeTitles;
-(id)_profileModeStringFromType:(long long)arg1 ;
-(long long)_profileModeFromTitle:(id)arg1 ;
-(void)setProfileMode:(long long)arg1 ;
-(void)setProfileModeTitlesValueVC:(WFValueListViewController *)arg1 ;
-(void)_setFirstResponderAfterCell:(id)arg1 ;
-(id)_TLSIdentityDescription;
-(id)_WAPIIdentityDescription;
-(id)_WAPIRootCertificateDescription;
-(id)_availableProfileModes;
-(BOOL)WPA3EnterpriseEnabled;
-(BOOL)WPA2EnterpriseEnabledMFPCapable;
-(id)_availableSecurityModes;
-(void)setTLSIdentities:(NSArray *)arg1 ;
-(void)setSupportsWiFiPasswordSharing:(BOOL)arg1 ;
-(void)setWPA2EnterpriseEnabledMFPCapable:(BOOL)arg1 ;
-(WFTextFieldCell *)mostRecentFirstResponder;
-(void)setMostRecentFirstResponder:(WFTextFieldCell *)arg1 ;
-(NSString *)defaultActivityString;
-(BOOL)overrideDefaultSecurity;
-(void)setOverrideDefaultSecurity:(BOOL)arg1 ;
-(BOOL)shouldCancelContextWhenViewDisappear;
-(void)setShouldCancelContextWhenViewDisappear:(BOOL)arg1 ;
@end

