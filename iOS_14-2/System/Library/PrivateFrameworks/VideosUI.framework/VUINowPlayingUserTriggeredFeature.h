/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUINowPlayingUserTriggeredFeature.h>

@protocol VUINowPlayingUserTriggeredFeature <VUINowPlayingFeature>
@end


@class NSString;

@interface VUINowPlayingUserTriggeredFeature : NSObject <VUINowPlayingUserTriggeredFeature> {

	BOOL _active;
	BOOL _autoRemove;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)userInfo;
-(id)init;
-(BOOL)isActive;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
@end

