/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class UISUserInterfaceStyleMode, NSString;

@interface WFAppearanceSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	UISUserInterfaceStyleMode* _styleMode;

}

@property (nonatomic,readonly) UISUserInterfaceStyleMode * styleMode;              //@synthesize styleMode=_styleMode - In the implementation block
@property (nonatomic,readonly) long long currentAppearance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)currentAppearance;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithStyleMode:(id)arg1 ;
-(void)setAppearance:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UISUserInterfaceStyleMode *)styleMode;
@end

