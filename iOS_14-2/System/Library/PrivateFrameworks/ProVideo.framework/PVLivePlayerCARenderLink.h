/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/PVLivePlayerRenderLink.h>

@class CADisplayLink;

@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink {

	long long _prefferedCADisplayFPS;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) long long prefferedCADisplayFPS; 
-(void)rebuild;
-(void)teardown;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithCADisplayLinkFPS:(long long)arg1 ;
-(long long)prefferedCADisplayFPS;
-(void)setPrefferedCADisplayFPS:(long long)arg1 ;
@end

