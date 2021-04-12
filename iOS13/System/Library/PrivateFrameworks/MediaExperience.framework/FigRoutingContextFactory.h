/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


@protocol FigRoutingContextFactory <NSObject>
@optional
-(int)copyDefaultContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;

@required
-(int)createControlChannelOnlyContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemMusicContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemMirroringContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createRemoteMusicControllerContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copyContextForUUIDWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)createPerAppSecondDisplayContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copyDisplayMenuVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;
-(int)copySystemRemotePoolContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(*)arg3;

@end

