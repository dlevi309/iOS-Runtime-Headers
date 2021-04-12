/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVBlockScheduler.h>

@class NSArray, NSString;

@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler> {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	NSArray* _blocks;
	OpaqueFigReentrantMutexRef _blockSerializationLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)scheduleBlock:(/*^block*/id)arg1 ;
@end

