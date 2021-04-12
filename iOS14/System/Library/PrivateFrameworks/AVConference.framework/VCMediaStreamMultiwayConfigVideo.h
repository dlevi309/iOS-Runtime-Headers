/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)resolution;
-(id)init;
-(void)setFramerate:(unsigned)arg1 ;
-(unsigned)framerate;
-(id)streamIds;
-(NSSet *)payloads;
-(void)setResolution:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(NSArray *)subStreamConfigs;
-(void)addPayload:(int)arg1 ;
-(void)addSubStreamConfig:(id)arg1 ;
@end

