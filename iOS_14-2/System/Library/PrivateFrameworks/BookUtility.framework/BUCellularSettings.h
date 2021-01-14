/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@class NSString;

@interface BUCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) BOOL allowAutomaticDownloads; 
@property (nonatomic,readonly) BOOL legacyAllowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(id)settingsForIdentity:(id)arg1 ;
+(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
+(id)_copyValueForCarrierBundleKey:(id)arg1 ;
-(id)_cellularSettings;
-(id)initWithDefaultsKey:(id)arg1 ;
-(BOOL)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(BOOL)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
-(BOOL)legacyAllowAutomaticDownloads;
@end

