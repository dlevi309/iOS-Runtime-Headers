/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)assistiveTouch:(id)arg1 setEnabled:(BOOL)arg2 ;
-(void)_assistiveTouchToggled:(id)arg1 ;
-(void)_startAssistiveTouch:(id)arg1 ;
-(void)_stopAssistiveTouch:(id)arg1 ;
-(ACCAssistiveTouchProvider *)assistiveTouchProvider;
-(void)setAssistiveTouchProvider:(ACCAssistiveTouchProvider *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assistiveTouchQueue;
-(void)setAssistiveTouchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

