/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTone.h>

@interface AXMLiveContinuousTone : AXMTone {

	BOOL _muted;
	BOOL _releasing;
	double _phase;
	unsigned long long _framesRendered;
	unsigned long long _releaseFrame;

}

@property (nonatomic,readonly) double phase;                                 //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) unsigned long long framesRendered;              //@synthesize framesRendered=_framesRendered - In the implementation block
@property (assign,nonatomic) BOOL releasing;                                 //@synthesize releasing=_releasing - In the implementation block
@property (assign,nonatomic) unsigned long long releaseFrame;                //@synthesize releaseFrame=_releaseFrame - In the implementation block
@property (assign,nonatomic) BOOL muted;                                     //@synthesize muted=_muted - In the implementation block
-(void)setFrequency:(double)arg1 ;
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >*)arg1 atFrame:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)releasing;
-(void)setReleasing:(BOOL)arg1 ;
-(void)setReleaseFrame:(unsigned long long)arg1 ;
-(unsigned long long)framesRendered;
-(void)resetRelease;
-(unsigned long long)releaseFrame;
-(void)setFramesRendered:(unsigned long long)arg1 ;
-(void)startRelease;
-(double)phase;
-(BOOL)muted;
@end

