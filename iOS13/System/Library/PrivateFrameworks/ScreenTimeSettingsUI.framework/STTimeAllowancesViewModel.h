/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class STDeviceBedtime, NSDictionary, STAlwaysAllowList;

@interface STTimeAllowancesViewModel : NSObject {

	BOOL _allAllowancesEnabled;
	STDeviceBedtime* _bedtime;
	NSDictionary* _allowancesByIdentifier;
	STAlwaysAllowList* _alwaysAllowList;
	NSDictionary* _pendingAskForTimeByIdentifier;

}

@property (assign,nonatomic) BOOL allAllowancesEnabled;                               //@synthesize allAllowancesEnabled=_allAllowancesEnabled - In the implementation block
@property (nonatomic,copy) STDeviceBedtime * bedtime;                                 //@synthesize bedtime=_bedtime - In the implementation block
@property (nonatomic,copy) NSDictionary * allowancesByIdentifier;                     //@synthesize allowancesByIdentifier=_allowancesByIdentifier - In the implementation block
@property (nonatomic,copy) STAlwaysAllowList * alwaysAllowList;                       //@synthesize alwaysAllowList=_alwaysAllowList - In the implementation block
@property (nonatomic,copy) NSDictionary * pendingAskForTimeByIdentifier;              //@synthesize pendingAskForTimeByIdentifier=_pendingAskForTimeByIdentifier - In the implementation block
-(id)init;
-(NSDictionary *)allowancesByIdentifier;
-(BOOL)allAllowancesEnabled;
-(STDeviceBedtime *)bedtime;
-(void)setBedtime:(STDeviceBedtime *)arg1 ;
-(STAlwaysAllowList *)alwaysAllowList;
-(void)setAlwaysAllowList:(STAlwaysAllowList *)arg1 ;
-(NSDictionary *)pendingAskForTimeByIdentifier;
-(void)setAllAllowancesEnabled:(BOOL)arg1 ;
-(void)setAllowancesByIdentifier:(NSDictionary *)arg1 ;
-(void)setPendingAskForTimeByIdentifier:(NSDictionary *)arg1 ;
@end

