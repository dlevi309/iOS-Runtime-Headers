/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigSampleBufferRenderSynchronizerFactory.h>

@class NSString;

@interface AVRemoteFigSampleBufferRenderSynchronizerFactory : NSObject <AVFigSampleBufferRenderSynchronizerFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OpaqueFigSampleBufferRenderSynchronizerRef)createRenderSynchronizerWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 error:(id*)arg3 ;
@end

