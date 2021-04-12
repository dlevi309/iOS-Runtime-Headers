/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIStatusBarServerClient;
#import <UIKitCore/UIKitCore-Structs.h>
@interface UIStatusBarServer : NSObject {

	id<UIStatusBarServerClient> _statusBar;
	CFRunLoopSourceRef _source;

}

@property (nonatomic,retain) id<UIStatusBarServerClient> statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(const char*)serviceName;
+(void)runServer;
+(unsigned)_serverPort;
+(void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
+(void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2 ;
+(void)addStatusBarItem:(int)arg1 ;
+(void)removeStatusBarItem:(int)arg1 ;
+(void)addStyleOverrides:(int)arg1 ;
+(void)removeStyleOverrides:(int)arg1 ;
+(unsigned)_publisherPort;
+(void)postStatusBarData:(const SCD_Struct_UI110*)arg1 withActions:(int)arg2 ;
+(void)postStatusBarOverrideData:(SCD_Struct_UI113*)arg1 ;
+(void)permanentizeStatusBarOverrideData;
+(id)_cachedTimeStringFromData:(SCD_Struct_UI110*)arg1 ;
+(const SCD_Struct_UI110*)getStatusBarData;
+(SCD_Struct_UI113*)getStatusBarOverrideData;
+(int)getStyleOverrides;
+(double)getGlowAnimationEndTimeForStyle:(long long)arg1 ;
+(BOOL)getGlowAnimationStateForStyle:(long long)arg1 ;
+(id)getDoubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)dealloc;
-(id<UIStatusBarServerClient>)statusBar;
-(void)setStatusBar:(id<UIStatusBarServerClient>)arg1 ;
-(void)_receivedStatusBarData:(SCD_Struct_UI110*)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)_receivedStyleOverrides:(int)arg1 ;
-(void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(void)_receivedDoubleHeightStatus:(const char*)arg1 forStyle:(long long)arg2 ;
-(id)initWithStatusBar:(id)arg1 ;
@end

