/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUINowPlayingFeature <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove; 
@property (nonatomic,retain) id userInfo; 
@required
-(unsigned long long)type;
-(id)userInfo;
-(BOOL)isActive;
-(void)setUserInfo:(id)arg1;
-(void)setActive:(BOOL)arg1;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1;

@end

