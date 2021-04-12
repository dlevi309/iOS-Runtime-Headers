/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AUAudioUnitBusArray.h>

@interface AUAudioUnitBusArray_XPC : AUAudioUnitBusArray {

	BOOL _countWritable;

}
-(BOOL)setBusCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isCountChangeable;
-(id)initWithOwner:(id)arg1 scope:(unsigned)arg2 busses:(id)arg3 countWritable:(BOOL)arg4 ;
@end

