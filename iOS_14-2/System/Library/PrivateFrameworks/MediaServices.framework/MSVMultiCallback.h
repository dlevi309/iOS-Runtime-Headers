/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invoke;
-(id)init;
-(MSVCallback *)firstCallback;
-(NSArray *)callbacks;
-(void)setFirstCallback:(MSVCallback *)arg1 ;
-(unsigned long long)count;
-(void)setLastCallback:(MSVCallback *)arg1 ;
-(void)invokeWithObject:(id)arg1 ;
-(void)addCallback:(id)arg1 ;
-(MSVCallback *)lastCallback;
-(BOOL)removeCallback:(id)arg1 ;
@end

