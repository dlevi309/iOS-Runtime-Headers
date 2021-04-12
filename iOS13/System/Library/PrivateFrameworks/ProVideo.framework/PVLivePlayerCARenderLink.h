/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/PVLivePlayerRenderLink.h>

@class CADisplayLink;

@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink {

	long long _prefferedCADisplayFPS;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) long long prefferedCADisplayFPS; 
-(void)teardown;
-(void)displayLinkFired:(id)arg1 ;
-(void)rebuild;
-(id)initWithCADisplayLinkFPS:(long long)arg1 ;
-(long long)prefferedCADisplayFPS;
-(void)setPrefferedCADisplayFPS:(long long)arg1 ;
@end

