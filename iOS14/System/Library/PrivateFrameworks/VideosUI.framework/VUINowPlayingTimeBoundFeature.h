/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUINowPlayingTimeBoundFeature.h>

@protocol VUINowPlayingTimeBoundFeature <VUINowPlayingFeature>
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isSkippable,nonatomic) BOOL skippable; 
@required
-(void)setStartTime:(double)arg1;
-(BOOL)isSkippable;
-(double)duration;
-(double)startTime;
-(void)setSkippable:(BOOL)arg1;

@end


@class NSString;

@interface VUINowPlayingTimeBoundFeature : NSObject <VUINowPlayingTimeBoundFeature> {

	BOOL _active;
	BOOL _autoRemove;
	BOOL _skippable;
	double _startTime;
	double _duration;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (assign,nonatomic) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isSkippable,nonatomic) BOOL skippable;                    //@synthesize skippable=_skippable - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)userInfo;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(BOOL)isActive;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)description;
-(BOOL)isSkippable;
-(unsigned long long)type;
-(unsigned long long)hash;
-(double)duration;
-(double)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
-(void)setSkippable:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3 ;
@end

