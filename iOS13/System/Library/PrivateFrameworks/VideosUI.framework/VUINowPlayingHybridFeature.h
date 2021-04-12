/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUINowPlayingHybridFeature.h>

@protocol VUINowPlayingHybridFeature <VUINowPlayingTimeBoundFeature,VUINowPlayingUserTriggeredFeature>
@property (assign,nonatomic) unsigned long long activationType; 
@required
-(unsigned long long)activationType;
-(void)setActivationType:(unsigned long long)arg1;

@end


@class NSString;

@interface VUINowPlayingHybridFeature : NSObject <VUINowPlayingHybridFeature> {

	BOOL _active;
	BOOL _autoRemove;
	BOOL _skippable;
	double _startTime;
	double _duration;
	unsigned long long _activationType;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (assign,nonatomic) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isSkippable,nonatomic) BOOL skippable;                    //@synthesize skippable=_skippable - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;                    //@synthesize activationType=_activationType - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)userInfo;
-(BOOL)isActive;
-(void)setUserInfo:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(double)duration;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)activationType;
-(void)setActivationType:(unsigned long long)arg1 ;
-(BOOL)isSkippable;
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3 ;
@end

