/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUINowPlayingFeature <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove; 
@property (nonatomic,retain) id userInfo; 
@required
-(void)setUserInfo:(id)arg1;
-(void)setActive:(BOOL)arg1;
-(id)userInfo;
-(BOOL)isActive;
-(unsigned long long)type;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1;

@end

