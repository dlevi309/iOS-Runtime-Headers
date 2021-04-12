/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPContainedObject.h>
#import <TSReading/TSTTableHeaderStorage.h>

@protocol TSTTableHeaderStorage <NSObject>
@required
-(long long)count;
-(void)removeHeaderForKey:(unsigned)arg1;
-(void)setHeader:(id)arg1 forKey:(unsigned)arg2;
-(unsigned)maxKey;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
-(void)shiftKeysAtIndex:(unsigned)arg1 amount:(int)arg2;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 willModify:(BOOL)arg3;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2;
-(void)removeAllHeaders;
-(void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2;
-(unsigned)minKey;
-(unsigned)upperBound:(unsigned)arg1;
-(unsigned)lowerBound:(unsigned)arg1;

@end


@class TSTTableHeaderStorageBucket, NSString;

@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage> {

	TSTTableHeaderStorageBucket* mBuckets[1];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)count;
-(id)initWithOwner:(id)arg1 ;
-(void)removeHeaderForKey:(unsigned)arg1 ;
-(void)setHeader:(id)arg1 forKey:(unsigned)arg2 ;
-(unsigned)maxKey;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3 ;
-(void)shiftKeysAtIndex:(unsigned)arg1 amount:(int)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 willModify:(BOOL)arg3 ;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 ;
-(void)removeAllHeaders;
-(void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2 ;
-(unsigned)minKey;
-(unsigned)upperBound:(unsigned)arg1 ;
-(unsigned)lowerBound:(unsigned)arg1 ;
@end

