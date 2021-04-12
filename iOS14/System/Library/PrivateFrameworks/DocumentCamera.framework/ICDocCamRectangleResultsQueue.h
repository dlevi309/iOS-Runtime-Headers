/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSMutableArray * array;              //@synthesize array=_array - In the implementation block
-(void)clear;
-(id)init;
-(id)dequeue;
-(long long)size;
-(id)peek:(long long)arg1 ;
-(NSMutableArray *)array;
-(id)peek;
-(void)enqueue:(id)arg1 ;
-(void)setArray:(NSMutableArray *)arg1 ;
-(void)apply:(/*^block*/id)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)peekTail;
-(void)apply:(/*^block*/id)arg1 atIndex:(long long)arg2 ;
@end

