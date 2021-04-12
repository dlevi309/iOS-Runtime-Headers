/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(STDeviceBedtime *)bedtime;
-(void)setBedtime:(STDeviceBedtime *)arg1 ;
-(NSDictionary *)allowancesByIdentifier;
-(BOOL)allAllowancesEnabled;
-(STAlwaysAllowList *)alwaysAllowList;
-(void)setAlwaysAllowList:(STAlwaysAllowList *)arg1 ;
-(NSDictionary *)pendingAskForTimeByIdentifier;
-(void)setAllAllowancesEnabled:(BOOL)arg1 ;
-(void)setAllowancesByIdentifier:(NSDictionary *)arg1 ;
-(void)setPendingAskForTimeByIdentifier:(NSDictionary *)arg1 ;
@end

