/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


@protocol FigRoutingContextFactory <NSObject>
@optional
-(int)copyDefaultContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;

@required
-(int)copyDisplayMenuVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createPerAppSecondDisplayContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemMusicContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createRemoteMusicControllerContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copyContextForUUIDWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemRemotePoolContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemMirroringContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createControlChannelOnlyContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;

@end

