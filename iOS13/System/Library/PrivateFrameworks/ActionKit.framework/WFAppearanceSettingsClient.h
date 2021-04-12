/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>

@class UISUserInterfaceStyleMode;

@interface WFAppearanceSettingsClient : WFSettingsClient {

	UISUserInterfaceStyleMode* _styleMode;

}

@property (nonatomic,readonly) UISUserInterfaceStyleMode * styleMode;              //@synthesize styleMode=_styleMode - In the implementation block
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStyleMode:(id)arg1 ;
-(void)setAppearance:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UISUserInterfaceStyleMode *)styleMode;
@end

