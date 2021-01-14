/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDictionary;

@interface UIInputViewSetNotificationInfo : NSObject {

	BOOL _changedAccessoryOnly;
	BOOL _assistantOnScreenOnly;
	BOOL _forceNotification;
	BOOL _wasCausedRemotely;
	BOOL _dueToRotation;
	double _duration;
	unsigned long long _options;
	CGPoint _beginCenter;
	CGPoint _endCenter;
	CGRect _beginFrame;
	CGRect _endFrame;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSDictionary * privateUserInfo; 
@property (assign,nonatomic) CGRect beginFrame;                             //@synthesize beginFrame=_beginFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                               //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL changedAccessoryOnly;                     //@synthesize changedAccessoryOnly=_changedAccessoryOnly - In the implementation block
@property (assign,nonatomic) BOOL assistantOnScreenOnly;                    //@synthesize assistantOnScreenOnly=_assistantOnScreenOnly - In the implementation block
@property (assign,nonatomic) BOOL forceNotification;                        //@synthesize forceNotification=_forceNotification - In the implementation block
@property (assign,nonatomic) BOOL wasCausedRemotely;                        //@synthesize wasCausedRemotely=_wasCausedRemotely - In the implementation block
@property (assign,nonatomic) BOOL dueToRotation;                            //@synthesize dueToRotation=_dueToRotation - In the implementation block
@property (assign,nonatomic) CGPoint beginCenter;                           //@synthesize beginCenter=_beginCenter - In the implementation block
@property (assign,nonatomic) CGPoint endCenter;                             //@synthesize endCenter=_endCenter - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
+(id)info;
-(CGRect)bounds;
-(void)setDuration:(double)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(id)inverseInfo;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(CGRect)beginFrame;
-(unsigned long long)options;
-(NSDictionary *)privateUserInfo;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)containsChange;
-(BOOL)assistantOnScreenOnly;
-(void)setBeginFrame:(CGRect)arg1 ;
-(void)setForceNotification:(BOOL)arg1 ;
-(BOOL)wasCausedRemotely;
-(void)logGeometry;
-(id)rotationUserInfo;
-(CGPoint)endCenter;
-(void)setAssistantOnScreenOnly:(BOOL)arg1 ;
-(void)populateStartInfoWithFrame:(CGRect)arg1 ;
-(BOOL)changedAccessoryOnly;
-(void)setWasCausedRemotely:(BOOL)arg1 ;
-(void)setDueToRotation:(BOOL)arg1 ;
-(void)populateEndInfoWithFrame:(CGRect)arg1 ;
-(BOOL)forceNotification;
-(void)setChangedAccessoryOnly:(BOOL)arg1 ;
-(double)duration;
-(void)setBeginCenter:(CGPoint)arg1 ;
-(void)setEndCenter:(CGPoint)arg1 ;
-(CGPoint)beginCenter;
-(BOOL)dueToRotation;
-(void)populateWithAnimationStyle:(id)arg1 ;
@end

