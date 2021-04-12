/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class PSListController, NSArray, PSSpecifier;

@interface CTUIListWithHeaderLoadingGroup : NSObject {

	PSListController* _hostController;
	NSArray* _headerSpecifiers;
	NSArray* _contentSpecifiers;
	PSSpecifier* _spinnerSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) NSArray * headerSpecifiers;                            //@synthesize headerSpecifiers=_headerSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * contentSpecifiers;                           //@synthesize contentSpecifiers=_contentSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * spinnerSpecifier;                        //@synthesize spinnerSpecifier=_spinnerSpecifier - In the implementation block
-(id)specifiers;
-(PSSpecifier *)spinnerSpecifier;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setSpinnerSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithHostController:(id)arg1 ;
-(NSArray *)headerSpecifiers;
-(NSArray *)contentSpecifiers;
-(void)setContentSpecifiers:(NSArray *)arg1 ;
-(void)setHeaderSpecifiers:(NSArray *)arg1 ;
@end

