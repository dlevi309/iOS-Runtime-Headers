/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSTargetingValidation.h>

@class TPSInstalledAppInfo;

@interface TPSInstalledAppsValidation : TPSTargetingValidation {

	TPSInstalledAppInfo* _appInfo;

}

@property (nonatomic,retain) TPSInstalledAppInfo * appInfo;              //@synthesize appInfo=_appInfo - In the implementation block
-(void)setAppInfo:(TPSInstalledAppInfo *)arg1 ;
-(id)description;
-(TPSInstalledAppInfo *)appInfo;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithInstalledAppInfo:(id)arg1 ;
@end

