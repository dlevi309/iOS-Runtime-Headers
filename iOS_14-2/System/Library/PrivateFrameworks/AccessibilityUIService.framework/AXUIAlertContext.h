/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/


@protocol AXUIService;
@class NSString, AXDispatchTimer, AXUIAlert, UIImage, NSDictionary;

@interface AXUIAlertContext : NSObject {

	NSString* _identifier;
	double _creationTimeInterval;
	double _fadeAnimationDuration;
	AXDispatchTimer* _showOrHideTimer;
	AXUIAlert* _alertView;
	id<AXUIService> _service;
	unsigned long long _priority;
	double _duration;
	NSString* _text;
	NSString* _subtitleText;
	UIImage* _iconImage;
	unsigned long long _type;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double creationTimeInterval;                    //@synthesize creationTimeInterval=_creationTimeInterval - In the implementation block
@property (assign,nonatomic) double fadeAnimationDuration;                   //@synthesize fadeAnimationDuration=_fadeAnimationDuration - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * showOrHideTimer;              //@synthesize showOrHideTimer=_showOrHideTimer - In the implementation block
@property (nonatomic,retain) AXUIAlert * alertView;                          //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id<AXUIService> service;                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                          //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSDictionary *)userInfo;
-(UIImage *)iconImage;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(id)description;
-(NSString *)text;
-(void)setService:(id<AXUIService>)arg1 ;
-(unsigned long long)type;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(double)duration;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(id<AXUIService>)service;
-(AXUIAlert *)alertView;
-(void)setAlertView:(AXUIAlert *)arg1 ;
-(double)fadeAnimationDuration;
-(void)setFadeAnimationDuration:(double)arg1 ;
-(double)creationTimeInterval;
-(void)setCreationTimeInterval:(double)arg1 ;
-(AXDispatchTimer *)showOrHideTimer;
-(void)setShowOrHideTimer:(AXDispatchTimer *)arg1 ;
@end

