/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding> {

	BSMutableSettings* _clientSettings;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * scheme; 
@property (nonatomic,copy) NSString * launchInterfaceIdentifier; 
@property (nonatomic,copy) NSString * requiredOSVersion; 
@property (assign,nonatomic) unsigned long long interfaceOrientationMask; 
@property (assign,nonatomic) CGSize referenceSize; 
@property (assign,nonatomic) double imageScale; 
@property (assign,nonatomic) unsigned long long contentTypeMask; 
@property (assign,nonatomic) unsigned long long statusBarStateMask; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,copy) XBDisplayEdgeInsetsWrapper * customSafeAreaInsets; 
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen; 
@property (assign,nonatomic) unsigned long long statusBarState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicate;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(NSString *)scheme;
-(void)setName:(NSString *)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)userInterfaceStyle;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setImageScale:(double)arg1 ;
-(double)imageScale;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)isFullScreen;
-(XBDisplayEdgeInsetsWrapper *)customSafeAreaInsets;
-(void)setCustomSafeAreaInsets:(XBDisplayEdgeInsetsWrapper *)arg1 ;
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
-(unsigned long long)statusBarState;
-(NSString *)launchInterfaceIdentifier;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)setContentTypeMask:(unsigned long long)arg1 ;
-(BOOL)_hasClientObjectForKey:(unsigned long long)arg1 ;
-(unsigned long long)contentTypeMask;
-(unsigned long long)interfaceOrientationMask;
-(NSString *)requiredOSVersion;
-(unsigned long long)statusBarStateMask;
-(id)_clientObjectForKey:(unsigned long long)arg1 ;
-(void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(void)_removeClientObjectForKey:(unsigned long long)arg1 ;
-(void)setStatusBarStateMask:(unsigned long long)arg1 ;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
@end

