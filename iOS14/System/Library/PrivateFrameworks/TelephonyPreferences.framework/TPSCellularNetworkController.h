/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <libobjc.A.dylib/TPSRegistrationTelephonyControllerDelegate.h>

@class TPSCellularNetworkItem, NSArray, TPSRegistrationTelephonyController, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSCellularNetworkController : NSObject <TPSRegistrationTelephonyControllerDelegate> {

	long long _networkSelectionMode;
	TPSCellularNetworkItem* _selectedNetworkItem;
	NSArray* _networkItems;
	TPSRegistrationTelephonyController* _registrationController;
	NSArray* _networks;
	CTNetworkSelectionInfo* _networkSelectionInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,copy) NSArray * networkItems;                                                         //@synthesize networkItems=_networkItems - In the implementation block
@property (assign,nonatomic) long long networkSelectionMode;                                               //@synthesize networkSelectionMode=_networkSelectionMode - In the implementation block
@property (nonatomic,retain) TPSCellularNetworkItem * selectedNetworkItem;                                 //@synthesize selectedNetworkItem=_selectedNetworkItem - In the implementation block
@property (nonatomic,readonly) TPSRegistrationTelephonyController * registrationController;                //@synthesize registrationController=_registrationController - In the implementation block
@property (nonatomic,copy) NSArray * networks;                                                             //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) CTNetworkSelectionInfo * networkSelectionInfo;                                //@synthesize networkSelectionInfo=_networkSelectionInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                      //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (getter=isNetworkSelectionEnabled,nonatomic,readonly) BOOL networkSelectionEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)networks;
-(void)setNetworks:(NSArray *)arg1 ;
-(id)init;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(long long)networkSelectionMode;
-(void)setNetworkSelectionMode:(long long)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)networksChangedForRegistrationController:(id)arg1 ;
-(void)networkSelectionInfoChangedForRegistrationController:(id)arg1 ;
-(void)setNetworkSelectionInfo:(CTNetworkSelectionInfo *)arg1 ;
-(CTNetworkSelectionInfo *)networkSelectionInfo;
-(void)updateSelectedNetworkForNetworkSelectionInfo:(id)arg1 ;
-(void)updateNetworkSelectionModeForNetworkSelectionInfo:(id)arg1 ;
-(TPSCellularNetworkItem *)selectedNetworkItem;
-(TPSRegistrationTelephonyController *)registrationController;
-(id)networkItemForNetwork:(id)arg1 ;
-(void)setNetworkItems:(NSArray *)arg1 ;
-(void)setSelectedNetworkItem:(TPSCellularNetworkItem *)arg1 ;
-(NSArray *)networkItems;
-(BOOL)isNetworkSelectionEnabled;
-(id)networkItemAtIndex:(long long)arg1 ;
-(void)selectNetworkItemAtIndex:(unsigned long long)arg1 ;
-(void)selectNetworkSelectionMode:(long long)arg1 ;
@end

