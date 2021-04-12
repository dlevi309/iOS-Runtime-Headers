/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)phase;
-(void)setFrequency:(double)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(void)startRelease;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >*)arg1 atFrame:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 ;
-(void)setReleasing:(BOOL)arg1 ;
-(void)setReleaseFrame:(unsigned long long)arg1 ;
-(unsigned long long)framesRendered;
-(void)resetRelease;
-(BOOL)releasing;
-(unsigned long long)releaseFrame;
-(void)setFramesRendered:(unsigned long long)arg1 ;
@end

