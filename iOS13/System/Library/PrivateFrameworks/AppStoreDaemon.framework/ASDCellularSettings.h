/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSString;

@interface ASDCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) BOOL allowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(id)settingsForIdentity:(id)arg1 ;
-(id)initWithDefaultsKey:(id)arg1 ;
-(id)_cellularSettings;
-(BOOL)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(BOOL)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
@end

