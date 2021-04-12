/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTone.h>

@class NSArray;

@interface AXMVariablePitchTone : AXMTone {

	NSArray* _keyPitches;

}
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >*)arg1 atFrame:(unsigned long long)arg2 ;
-(unsigned long long)_bufferFrameForKeyPitch:(id)arg1 ;
-(id)initWithKeyPitches:(id)arg1 sampleRate:(double)arg2 envelope:(id)arg3 ;
@end

