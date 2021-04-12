/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class _CDBatterySaver, NSString;

@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	_CDBatterySaver* _batterySaver;

}

@property (nonatomic,readonly) _CDBatterySaver * batterySaver;              //@synthesize batterySaver=_batterySaver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(_CDBatterySaver *)batterySaver;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBatterySaver:(id)arg1 ;
@end

