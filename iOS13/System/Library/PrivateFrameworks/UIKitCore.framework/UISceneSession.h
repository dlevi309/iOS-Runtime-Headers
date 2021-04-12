/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	}  _sessionFlags;

}

@property (nonatomic,readonly) UICanvas * representedCanvas; 
@property (nonatomic,readonly) long long systemType; 
@property (nonatomic,readonly) Class canvasSubclass; 
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
+(id)defaultCanvasRepresentation;
+(id)canvasRepresentationForSystemType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)role;
-(id)_init;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)persistentIdentifier;
-(UISceneConfiguration *)configuration;
-(UIScene *)scene;
-(void)_setScene:(id)arg1 ;
-(Class)delegateClass;
-(void)_loadStateRestorationActivityIfNeeded;
-(void)_loadUserInfo;
-(void)_setUserInfoIsDirty:(BOOL)arg1 ;
-(id)_initWithIdentifier:(id)arg1 sessionRole:(id)arg2 configurationName:(id)arg3 ;
-(void)setStateRestorationActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)stateRestorationActivity;
-(BOOL)_configurationNeedsReevalulation;
-(void)_updateConfiguration:(id)arg1 ;
-(void)_resetStateRestorationToActivity:(id)arg1 ;
-(BOOL)_trackingRefreshRequest;
-(void)_setTrackingRefreshRequest:(BOOL)arg1 ;
-(BOOL)_configurationIsDirty;
-(void)_setConfigurationIsDirty:(BOOL)arg1 ;
-(BOOL)_userInfoIsDirty;
-(BOOL)_stateRestorationActivityIsDirty;
-(void)_setStateRestorationActivityIsDirty:(BOOL)arg1 ;
-(void)_clearAllDirtyFlags;
-(id)_copyWithoutUserInfo;
-(UICanvas *)representedCanvas;
-(long long)systemType;
-(Class)canvasSubclass;
@end

