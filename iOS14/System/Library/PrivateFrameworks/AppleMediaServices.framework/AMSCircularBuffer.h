/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)currentIndex;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(id)flush;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(id)init;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)description;
-(void)addObject:(id)arg1 ;
-(NSMutableArray *)buffer;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(unsigned long long)maxSize;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)_flush;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

