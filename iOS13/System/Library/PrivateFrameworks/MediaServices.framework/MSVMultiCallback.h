/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, MSVCallback, NSObject, NSArray;

@interface MSVMultiCallback : NSObject {

	NSMutableArray* _callbacks;
	MSVCallback* _firstCallback;
	MSVCallback* _lastCallback;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * callbacks; 
@property (nonatomic,retain) MSVCallback * firstCallback; 
@property (nonatomic,retain) MSVCallback * lastCallback; 
-(id)init;
-(unsigned long long)count;
-(void)invoke;
-(NSArray *)callbacks;
-(void)invokeWithObject:(id)arg1 ;
-(void)addCallback:(id)arg1 ;
-(void)setFirstCallback:(MSVCallback *)arg1 ;
-(MSVCallback *)firstCallback;
-(void)setLastCallback:(MSVCallback *)arg1 ;
-(MSVCallback *)lastCallback;
-(BOOL)removeCallback:(id)arg1 ;
@end

