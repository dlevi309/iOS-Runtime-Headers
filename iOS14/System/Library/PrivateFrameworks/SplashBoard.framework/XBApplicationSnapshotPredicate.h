/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)imageScale;
-(void)setScheme:(NSString *)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)setImageScale:(double)arg1 ;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(id)succinctDescription;
-(NSString *)requiredOSVersion;
-(BOOL)isFullScreen;
-(NSString *)scheme;
-(long long)userInterfaceStyle;
-(unsigned long long)statusBarState;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id)init;
-(XBDisplayEdgeInsetsWrapper *)customSafeAreaInsets;
-(void)_removeClientObjectForKey:(unsigned long long)arg1 ;
-(void)setCustomSafeAreaInsets:(XBDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(NSString *)launchInterfaceIdentifier;
-(void)setStatusBarStateMask:(unsigned long long)arg1 ;
-(NSString *)name;
-(CGSize)referenceSize;
-(void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(unsigned long long)interfaceOrientationMask;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(NSString *)description;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(id)_clientObjectForKey:(unsigned long long)arg1 ;
-(unsigned long long)contentTypeMask;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)statusBarStateMask;
-(void)setContentTypeMask:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)_hasClientObjectForKey:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
@end

