/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@class NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {

	BinarySemaphore m_semaphore;

}

@property (nonatomic,readonly) BinarySemaphore* semaphore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BinarySemaphore*)semaphore;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
@end

