/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVEffectTimedPropertiesDelegate;
@class NSArray, NSDictionary;

@interface PVEffectTimedPropertiesDelegateWrapper : NSObject {

	BOOL _wantsStartStopNotifications;
	id<PVEffectTimedPropertiesDelegate> _timedPropertiesDelegate;
	NSArray* _supportedTimedPropertyGroups;
	NSDictionary* _userContext;

}

@property (assign,nonatomic,__weak) id<PVEffectTimedPropertiesDelegate> timedPropertiesDelegate;              //@synthesize timedPropertiesDelegate=_timedPropertiesDelegate - In the implementation block
@property (nonatomic,retain) NSArray * supportedTimedPropertyGroups;                                          //@synthesize supportedTimedPropertyGroups=_supportedTimedPropertyGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * userContext;                                                      //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) BOOL wantsStartStopNotifications;                                                //@synthesize wantsStartStopNotifications=_wantsStartStopNotifications - In the implementation block
-(NSDictionary *)userContext;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimedPropertiesDelegate:(id<PVEffectTimedPropertiesDelegate>)arg1 ;
-(void)setSupportedTimedPropertyGroups:(NSArray *)arg1 ;
-(void)setWantsStartStopNotifications:(BOOL)arg1 ;
-(id<PVEffectTimedPropertiesDelegate>)timedPropertiesDelegate;
-(id)initWithTimedPropertiesDelegate:(id)arg1 supportedTimedPropertyGroups:(id)arg2 userContext:(id)arg3 ;
-(NSArray *)supportedTimedPropertyGroups;
-(BOOL)wantsStartStopNotifications;
@end

