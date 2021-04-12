/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/


#import <SensorKitUI/SensorKitUI-Structs.h>
@class NSString, NSDictionary, SRAppInfoPlistHelper, UITableView;

@interface SRAuthorizationCommonUI : NSObject {

	NSString* _authCategory;
	NSDictionary* _info;
	SRAppInfoPlistHelper* _plistHelper;
	UITableView* _tableView;
	NSString* _authGroup;

}

@property (nonatomic,copy) NSString * authCategory;                           //@synthesize authCategory=_authCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * info;                             //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) SRAppInfoPlistHelper * plistHelper;              //@synthesize plistHelper=_plistHelper - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * authGroup;                            //@synthesize authGroup=_authGroup - In the implementation block
+(id)sortedServices:(id)arg1 ;
+(id)userFacingNameForAuthGroup:(id)arg1 ;
+(id)prepareSwitchCellForIndexPath:(id)arg1 title:(id)arg2 state:(id)arg3 delegate:(id)arg4 tableView:(id)arg5 ;
+(id)platformsIcon:(id)arg1 ;
+(id)imageDescriptorForAuthorization;
+(id)appIcon:(id)arg1 imageDescriptor:(id)arg2 ;
+(id)prepareDeleteAllCellForTableView:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)info;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)initWithAuthGroup:(id)arg1 bundle:(id)arg2 tableView:(id)arg3 ;
-(id)prepareSwitchCellForIndexPath:(id)arg1 state:(id)arg2 delegate:(id)arg3 ;
-(id)prepareDetailCellTitleFont:(id)arg1 bodyFont:(id)arg2 textColor:(id)arg3 OBKStyle:(BOOL)arg4 ;
-(id)prepareDataSampleCell;
-(id)requiredAuthorizationRevokeAlertIfNeccesaryForBundle:(id)arg1 indexPath:(id)arg2 destructiveHandler:(/*^block*/id)arg3 ;
-(id)prepareExampleSample;
-(void)setAuthCategory:(NSString *)arg1 ;
-(void)setPlistHelper:(SRAppInfoPlistHelper *)arg1 ;
-(void)setAuthGroup:(NSString *)arg1 ;
-(NSString *)authCategory;
-(id)platforms;
-(id)authGroupUserFacingName;
-(SRAppInfoPlistHelper *)plistHelper;
-(id)requiredAuthorizationAlertIfNeccesaryForBundle:(id)arg1 title:(id)arg2 message:(id)arg3 destructiveButtonTitle:(id)arg4 destructiveHandler:(/*^block*/id)arg5 cancelButtonTitle:(id)arg6 cancelHandler:(/*^block*/id)arg7 ;
-(NSString *)authGroup;
-(id)prepareAuthGroupDescriptionImageView:(CGSize)arg1 ;
-(id)prepareGeneralInfoCell;
-(id)prepareSelectionCell:(BOOL)arg1 ;
-(id)requiredAuthorizationAlertIfNeccesaryForBundle:(id)arg1 authCategory:(id)arg2 destructiveHandler:(/*^block*/id)arg3 ;
@end

