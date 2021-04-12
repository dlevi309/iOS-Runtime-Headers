/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCMediaStreamMultiwayConfig.h>

@class NSMutableSet, NSMutableArray, NSSet, NSArray;

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig {

	long long _resolution;
	NSMutableSet* _payloads;
	unsigned _framerate;
	unsigned long long _keyFrameInterval;
	NSMutableArray* _subStreamConfigs;

}

@property (assign,nonatomic) long long resolution;                             //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) unsigned framerate;                               //@synthesize framerate=_framerate - In the implementation block
@property (nonatomic,readonly) NSSet * payloads;                               //@synthesize payloads=_payloads - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (nonatomic,readonly) NSArray * subStreamConfigs;                     //@synthesize subStreamConfigs=_subStreamConfigs - In the implementation block
-(id)init;
-(void)dealloc;
-(NSSet *)payloads;
-(long long)resolution;
-(void)setResolution:(long long)arg1 ;
-(id)streamIds;
-(unsigned)framerate;
-(void)setFramerate:(unsigned)arg1 ;
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(NSArray *)subStreamConfigs;
-(void)addPayload:(int)arg1 ;
-(void)addSubStreamConfig:(id)arg1 ;
@end

