/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigSampleBufferRenderSynchronizerFactory.h>

@class NSString;

@interface AVRemoteFigSampleBufferRenderSynchronizerFactory : NSObject <AVFigSampleBufferRenderSynchronizerFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OpaqueFigSampleBufferRenderSynchronizerRef)createRenderSynchronizerWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 error:(id*)arg3 ;
@end

