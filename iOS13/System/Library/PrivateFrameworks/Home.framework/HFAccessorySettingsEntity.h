/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSArray, NSDictionary, NSFormatter;

@interface HFAccessorySettingsEntity : NSObject {

	BOOL _requiresDependenciesToShowSetting;
	BOOL _previewAccessory;
	BOOL _alwaysShowGroup;
	BOOL _wantsSeparateSectionPerGroup;
	BOOL _showInSeperateSection;
	BOOL _isSoftwareVersionNeeded;
	NSString* _keyPath;
	NSString* _sortKey;
	NSString* _localizedHeader;
	NSString* _localizedFooter;
	NSString* _overrideLocalizedTitleKey;
	NSArray* _booleanKeyPathDependencies;
	NSDictionary* _userInfo;
	long long _interfaceModality;
	NSString* _previewValueKeyPath;
	NSFormatter* _previewValueFormatter;
	NSFormatter* _footerTitleFormatter;
	NSString* _adapterIdentifier;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                                //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortKey;                                //@synthesize sortKey=_sortKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedHeader;                        //@synthesize localizedHeader=_localizedHeader - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedFooter;                        //@synthesize localizedFooter=_localizedFooter - In the implementation block
@property (nonatomic,copy,readonly) NSString * overrideLocalizedTitleKey;              //@synthesize overrideLocalizedTitleKey=_overrideLocalizedTitleKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * booleanKeyPathDependencies;              //@synthesize booleanKeyPathDependencies=_booleanKeyPathDependencies - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) long long interfaceModality;                            //@synthesize interfaceModality=_interfaceModality - In the implementation block
@property (nonatomic,readonly) BOOL requiresDependenciesToShowSetting;                 //@synthesize requiresDependenciesToShowSetting=_requiresDependenciesToShowSetting - In the implementation block
@property (nonatomic,readonly) BOOL previewAccessory;                                  //@synthesize previewAccessory=_previewAccessory - In the implementation block
@property (nonatomic,copy,readonly) NSString * previewValueKeyPath;                    //@synthesize previewValueKeyPath=_previewValueKeyPath - In the implementation block
@property (nonatomic,copy,readonly) NSFormatter * previewValueFormatter;               //@synthesize previewValueFormatter=_previewValueFormatter - In the implementation block
@property (nonatomic,copy,readonly) NSFormatter * footerTitleFormatter;                //@synthesize footerTitleFormatter=_footerTitleFormatter - In the implementation block
@property (nonatomic,readonly) BOOL alwaysShowGroup;                                   //@synthesize alwaysShowGroup=_alwaysShowGroup - In the implementation block
@property (nonatomic,readonly) BOOL wantsSeparateSectionPerGroup;                      //@synthesize wantsSeparateSectionPerGroup=_wantsSeparateSectionPerGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * adapterIdentifier;                      //@synthesize adapterIdentifier=_adapterIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL showInSeperateSection;                             //@synthesize showInSeperateSection=_showInSeperateSection - In the implementation block
@property (nonatomic,readonly) BOOL isSoftwareVersionNeeded;                           //@synthesize isSoftwareVersionNeeded=_isSoftwareVersionNeeded - In the implementation block
+(id)settingsAtURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSDictionary *)userInfo;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)keyPath;
-(NSString *)sortKey;
-(NSString *)localizedFooter;
-(NSString *)overrideLocalizedTitleKey;
-(NSArray *)booleanKeyPathDependencies;
-(long long)interfaceModality;
-(NSString *)adapterIdentifier;
-(NSString *)previewValueKeyPath;
-(BOOL)previewAccessory;
-(NSFormatter *)previewValueFormatter;
-(BOOL)alwaysShowGroup;
-(BOOL)requiresDependenciesToShowSetting;
-(NSString *)localizedHeader;
-(NSFormatter *)footerTitleFormatter;
-(BOOL)wantsSeparateSectionPerGroup;
-(BOOL)showInSeperateSection;
-(BOOL)isSoftwareVersionNeeded;
@end

