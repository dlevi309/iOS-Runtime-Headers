/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent {

	TISKSessionSamples* _sessionSamples;

}

@property (nonatomic,retain) TISKSessionSamples * sessionSamples;              //@synthesize sessionSamples=_sessionSamples - In the implementation block
-(id)description;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(TISKSessionSamples *)sessionSamples;
-(void)setSessionSamples:(TISKSessionSamples *)arg1 ;
@end

