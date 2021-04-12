/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIStatusBarServerClient;
#import <UIKitCore/UIKitCore-Structs.h>
@interface UIStatusBarServer : NSObject {

	id<UIStatusBarServerClient> _statusBar;
	CFRunLoopSourceRef _source;

}

@property (nonatomic,retain) id<UIStatusBarServerClient> statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(const SCD_Struct_UI121*)getStatusBarData;
+(void)removeStatusBarItem:(int)arg1 ;
+(void)permanentizeStatusBarOverrideData;
+(double)getGlowAnimationEndTimeForStyle:(long long)arg1 ;
+(unsigned)_serverPort;
+(void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2 ;
+(void)postStatusBarData:(const SCD_Struct_UI121*)arg1 withActions:(int)arg2 ;
+(int)getStyleOverrides;
+(id)getDoubleHeightStatusStringForStyle:(long long)arg1 ;
+(void)addStatusBarItem:(int)arg1 ;
+(unsigned)_publisherPort;
+(const char*)serviceName;
+(void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
+(id)_cachedTimeStringFromData:(SCD_Struct_UI121*)arg1 ;
+(void)addStyleOverrides:(int)arg1 ;
+(void)runServer;
+(void)removeStyleOverrides:(int)arg1 ;
+(BOOL)getGlowAnimationStateForStyle:(long long)arg1 ;
+(SCD_Struct_UI124*)getStatusBarOverrideData;
+(void)postStatusBarOverrideData:(SCD_Struct_UI124*)arg1 ;
-(void)setStatusBar:(id<UIStatusBarServerClient>)arg1 ;
-(id)initWithStatusBar:(id)arg1 ;
-(id<UIStatusBarServerClient>)statusBar;
-(void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(void)_receivedDoubleHeightStatus:(const char*)arg1 forStyle:(long long)arg2 ;
-(void)_receivedStatusBarData:(SCD_Struct_UI121*)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)_receivedStyleOverrides:(int)arg1 ;
-(void)dealloc;
@end

