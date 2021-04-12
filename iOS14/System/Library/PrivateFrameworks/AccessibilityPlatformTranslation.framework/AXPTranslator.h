/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/


@protocol AXPTranslationDelegateHelper, AXPTranslationTokenDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate;
#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
@class NSMutableDictionary;

@interface AXPTranslator : NSObject {

	BOOL _accessibilityEnabled;
	BOOL _supportsDelegateTokens;
	id<AXPTranslationDelegateHelper> _bridgeDelegate;
	id<AXPTranslationTokenDelegateHelper> _bridgeTokenDelegate;
	id<AXPTranslationRuntimeHelper> _runtimeDelegate;
	id<AXPTranslationSystemAppDelegate> _systemAppDelegate;
	NSMutableDictionary* _fakeElementCache;

}

@property (nonatomic,retain) NSMutableDictionary * fakeElementCache;                                        //@synthesize fakeElementCache=_fakeElementCache - In the implementation block
@property (assign,nonatomic) BOOL supportsDelegateTokens;                                                   //@synthesize supportsDelegateTokens=_supportsDelegateTokens - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationDelegateHelper> bridgeDelegate;                        //@synthesize bridgeDelegate=_bridgeDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationTokenDelegateHelper> bridgeTokenDelegate;              //@synthesize bridgeTokenDelegate=_bridgeTokenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationRuntimeHelper> runtimeDelegate;                        //@synthesize runtimeDelegate=_runtimeDelegate - In the implementation block
@property (assign,nonatomic) BOOL accessibilityEnabled;                                                     //@synthesize accessibilityEnabled=_accessibilityEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationSystemAppDelegate> systemAppDelegate;                  //@synthesize systemAppDelegate=_systemAppDelegate - In the implementation block
+(id)sharedInstance;
+(id)sharediOSInstance;
-(id)init;
-(BOOL)accessibilityEnabled;
-(id<AXPTranslationSystemAppDelegate>)systemAppDelegate;
-(void)enableAccessibility;
-(NSMutableDictionary *)fakeElementCache;
-(/*^block*/id)attributedStringConversionBlock;
-(void)initializeAXRuntimeForSystemAppServer;
-(void)setAccessibilityEnabled:(BOOL)arg1 ;
-(id)processMultipleAttributeRequest:(id)arg1 ;
-(id)processActionRequest:(id)arg1 ;
-(id)processCanSetAttribute:(id)arg1 ;
-(id)processSetAttribute:(id)arg1 ;
-(id)processSupportedActions:(id)arg1 ;
-(id)processAttributeRequest:(id)arg1 ;
-(id)processFrontMostApp:(id)arg1 ;
-(id)processHitTest:(id)arg1 ;
-(id)platformElementFromTranslation:(id)arg1 ;
-(id)translationObjectFromData:(id)arg1 ;
-(id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2 ;
-(void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3 ;
-(id<AXPTranslationRuntimeHelper>)runtimeDelegate;
-(void)setFakeElementCache:(NSMutableDictionary *)arg1 ;
-(id)_translationApplicationObjectForPidNumber:(id)arg1 ;
-(id)sendTranslatorRequest:(id)arg1 ;
-(id)platformTranslator;
-(void)_resetBridgeTokensForResponse:(id)arg1 bridgeDelegateToken:(id)arg2 ;
-(id<AXPTranslationDelegateHelper>)bridgeDelegate;
-(id<AXPTranslationTokenDelegateHelper>)bridgeTokenDelegate;
-(BOOL)supportsDelegateTokens;
-(void)setSystemAppDelegate:(id<AXPTranslationSystemAppDelegate>)arg1 ;
-(void)setBridgeDelegate:(id<AXPTranslationDelegateHelper>)arg1 ;
-(void)setSupportsDelegateTokens:(BOOL)arg1 ;
-(void)setBridgeTokenDelegate:(id<AXPTranslationTokenDelegateHelper>)arg1 ;
-(void)setRuntimeDelegate:(id<AXPTranslationRuntimeHelper>)arg1 ;
-(id)translationApplicationObject;
-(id)translationApplicationObjectForPid:(int)arg1 ;
-(id)frontmostApplicationWithDisplayId:(unsigned)arg1 bridgeDelegateToken:(id)arg2 ;
-(id)processTranslatorRequest:(id)arg1 ;
-(id)objectAtPoint:(CGPoint)arg1 displayId:(unsigned)arg2 bridgeDelegateToken:(id)arg3 ;
-(id)iosPlatformElementFromTranslation:(id)arg1 ;
-(void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 ;
@end

