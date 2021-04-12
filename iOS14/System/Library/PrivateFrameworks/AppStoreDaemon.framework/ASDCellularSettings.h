/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSString;

@interface ASDCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) BOOL allowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(id)settingsForIdentity:(id)arg1 ;
-(id)_cellularSettings;
-(id)initWithDefaultsKey:(id)arg1 ;
-(BOOL)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(BOOL)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
@end

