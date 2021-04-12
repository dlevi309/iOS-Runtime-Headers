/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/


@class NSArray;

@interface PSGBackupDisabledAppsInfo : NSObject {

	BOOL _includePhoto;
	NSArray* _backupDisabledAppsForDisplay;
	long long _backupDisabledAppCount;

}

@property (nonatomic,retain) NSArray * backupDisabledAppsForDisplay;              //@synthesize backupDisabledAppsForDisplay=_backupDisabledAppsForDisplay - In the implementation block
@property (assign,nonatomic) BOOL includePhoto;                                   //@synthesize includePhoto=_includePhoto - In the implementation block
@property (assign,nonatomic) long long backupDisabledAppCount;                    //@synthesize backupDisabledAppCount=_backupDisabledAppCount - In the implementation block
-(void)setBackupDisabledAppCount:(long long)arg1 ;
-(void)setBackupDisabledAppsForDisplay:(NSArray *)arg1 ;
-(void)setIncludePhoto:(BOOL)arg1 ;
-(long long)backupDisabledAppCount;
-(BOOL)includePhoto;
-(NSArray *)backupDisabledAppsForDisplay;
@end

