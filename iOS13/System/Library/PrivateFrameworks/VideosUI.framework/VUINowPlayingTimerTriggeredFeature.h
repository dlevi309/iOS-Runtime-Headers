/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUINowPlayingFeature.h>

@class NSString;

@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature> {

	BOOL _active;
	BOOL _autoRemove;
	BOOL _repeats;
	double _duration;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                                       //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)userInfo;
-(BOOL)isActive;
-(BOOL)repeats;
-(void)setUserInfo:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(double)duration;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(BOOL)arg3 ;
@end

