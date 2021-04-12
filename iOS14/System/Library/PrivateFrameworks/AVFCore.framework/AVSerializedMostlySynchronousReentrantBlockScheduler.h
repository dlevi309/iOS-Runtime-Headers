/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVBlockScheduler.h>

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
-(void)scheduleBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

