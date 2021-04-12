/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface AMSCircularBuffer : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentIndex;
	NSMutableArray* _buffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                       //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffer;                               //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long maxSize; 
+(id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(NSArray *)allObjects;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buffer;
-(id)flush;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(unsigned long long)maxSize;
-(id)_flush;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
@end

