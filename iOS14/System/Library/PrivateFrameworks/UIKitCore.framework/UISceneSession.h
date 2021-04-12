/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIScene, NSString, UISceneConfiguration, NSUserActivity, NSDictionary, UICanvas;

@interface UISceneSession : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	UIScene* _scene;
	NSString* _role;
	NSString* _persistentIdentifier;
	UISceneConfiguration* _configuration;
	NSUserActivity* _stateRestorationActivity;
	NSDictionary* _userInfo;
	struct {
		unsigned _userInfoIsCurrent : 1;
		unsigned _stateRestorationActivityIsDirty : 1;
		unsigned _stateRestorationActivityIsCurrent : 1;
		unsigned _trackingSessionRequest : 1;
		unsigned _configurationIsDirty : 1;
		unsigned _userInfoIsDirty : 1;
		unsigned _isInternal : 1;
	}  _sessionFlags;

}

@property (nonatomic,readonly) UICanvas * representedCanvas; 
@property (nonatomic,readonly) long long systemType; 
@property (nonatomic,readonly) Class canvasSubclass; 
@property (getter=_isInternal,nonatomic,readonly) BOOL _internal; 
@property (nonatomic,readonly) BOOL _configurationNeedsReevalulation; 
@property (assign,setter=_setTrackingRefreshRequest:,nonatomic) BOOL _trackingRefreshRequest; 
@property (assign,setter=_setConfigurationIsDirty:,nonatomic) BOOL _configurationIsDirty; 
@property (assign,setter=_setUserInfoIsDirty:,nonatomic) BOOL _userInfoIsDirty; 
@property (assign,setter=_setStateRestorationActivityIsDirty:,nonatomic) BOOL _stateRestorationActivityIsDirty; 
@property (nonatomic,__weak,readonly) UIScene * scene;                                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) NSString * role;                                                                              //@synthesize role=_role - In the implementation block
@property (nonatomic,copy,readonly) UISceneConfiguration * configuration; 
@property (nonatomic,readonly) NSString * persistentIdentifier;                                                              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) NSUserActivity * stateRestorationActivity; 
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
+(id)canvasRepresentationForSystemType:(long long)arg1 ;
+(id)defaultCanvasRepresentation;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(UIScene *)scene;
-(void)_setScene:(id)arg1 ;
-(void)_setUserInfoIsDirty:(BOOL)arg1 ;
-(long long)systemType;
-(BOOL)_trackingRefreshRequest;
-(NSDictionary *)userInfo;
-(id)_initWithIdentifier:(id)arg1 sessionRole:(id)arg2 configurationName:(id)arg3 ;
-(NSUserActivity *)stateRestorationActivity;
-(BOOL)_stateRestorationActivityIsDirty;
-(Class)delegateClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_setTrackingRefreshRequest:(BOOL)arg1 ;
-(void)_setStateRestorationActivityIsDirty:(BOOL)arg1 ;
-(NSString *)persistentIdentifier;
-(BOOL)_configurationNeedsReevalulation;
-(id)description;
-(UISceneConfiguration *)configuration;
-(void)_loadStateRestorationActivityIfNeeded;
-(void)_setConfigurationIsDirty:(BOOL)arg1 ;
-(void)setStateRestorationActivity:(NSUserActivity *)arg1 ;
-(void)_clearAllDirtyFlags;
-(void)_resetStateRestorationToActivity:(id)arg1 ;
-(BOOL)_configurationIsDirty;
-(void)_updateConfiguration:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(UICanvas *)representedCanvas;
-(id)_init;
-(BOOL)_isInternal;
-(id)_copyWithoutUserInfo;
-(NSString *)role;
-(void)_loadUserInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)canvasSubclass;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_userInfoIsDirty;
@end

