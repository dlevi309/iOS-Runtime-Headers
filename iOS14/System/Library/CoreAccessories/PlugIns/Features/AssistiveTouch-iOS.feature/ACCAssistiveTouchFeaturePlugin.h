/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/AssistiveTouch-iOS.feature/AssistiveTouch-iOS
*/

#import <libobjc.A.dylib/ACCAssistiveTouchProviderProtocol.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCAssistiveTouchProvider, NSObject, NSString;

@interface ACCAssistiveTouchFeaturePlugin : NSObject <ACCAssistiveTouchProviderProtocol, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCAssistiveTouchProvider* _assistiveTouchProvider;
	NSObject*<OS_dispatch_queue> _assistiveTouchQueue;

}

@property (assign,nonatomic) BOOL isRunning;                                        //@synthesize isRunning=_isRunning - In the implementation block
@property (retain) ACCAssistiveTouchProvider * assistiveTouchProvider;              //@synthesize assistiveTouchProvider=_assistiveTouchProvider - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> assistiveTouchQueue;                //@synthesize assistiveTouchQueue=_assistiveTouchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(void)_assistiveTouchToggled:(id)arg1 ;
-(NSString *)pluginName;
-(ACCAssistiveTouchProvider *)assistiveTouchProvider;
-(void)setAssistiveTouchProvider:(ACCAssistiveTouchProvider *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assistiveTouchQueue;
-(NSString *)description;
-(void)assistiveTouch:(id)arg1 setEnabled:(BOOL)arg2 ;
-(BOOL)isRunning;
-(void)stopPlugin;
-(void)_startAssistiveTouch:(id)arg1 ;
-(void)initPlugin;
-(void)_stopAssistiveTouch:(id)arg1 ;
-(void)setAssistiveTouchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startPlugin;
@end

