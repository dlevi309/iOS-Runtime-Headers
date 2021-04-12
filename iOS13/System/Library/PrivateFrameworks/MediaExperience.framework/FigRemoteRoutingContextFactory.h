/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <libobjc.A.dylib/FigRoutingContextFactory.h>

@class NSString;

@interface FigRemoteRoutingContextFactory : NSObject <FigRoutingContextFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)createControlChannelOnlyContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)copySystemMusicContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)createVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)copySystemAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)copySystemMirroringContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)createAudioContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)createRemoteMusicControllerContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)copyContextForUUIDWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)createPerAppSecondDisplayContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)copyDisplayMenuVideoContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
-(int)copySystemRemotePoolContextWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 context:(OpaqueFigRoutingContext*)arg3 ;
@end

