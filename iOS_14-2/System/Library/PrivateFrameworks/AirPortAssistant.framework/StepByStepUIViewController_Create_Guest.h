/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate> {

	NSString* _wifiName;
	NSString* _wifiPassword;
	BOOL _guestNetworkEnabled;
	int _guestNetSecMode;

}

@property (nonatomic,copy) NSString * wifiName;                     //@synthesize wifiName=_wifiName - In the implementation block
@property (nonatomic,copy) NSString * wifiPassword;                 //@synthesize wifiPassword=_wifiPassword - In the implementation block
@property (assign,nonatomic) BOOL guestNetworkEnabled;              //@synthesize guestNetworkEnabled=_guestNetworkEnabled - In the implementation block
@property (assign,nonatomic) int guestNetSecMode;                   //@synthesize guestNetSecMode=_guestNetSecMode - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4 ;
-(void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(BOOL)arg3 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)setWifiName:(NSString *)arg1 ;
-(void)setWifiPassword:(NSString *)arg1 ;
-(NSString *)wifiPassword;
-(NSString *)wifiName;
-(void)updateTable;
-(void)validateAndUpdateNextButton;
-(BOOL)validateAndSetValues;
-(void)setGuestNetworkEnabled:(BOOL)arg1 ;
-(void)setGuestNetSecMode:(int)arg1 ;
-(BOOL)guestNetworkEnabled;
-(int)guestNetSecMode;
-(void)addGuestNetworkIsEnabledSection;
-(void)addGuestNetworkPasswordSection;
@end

