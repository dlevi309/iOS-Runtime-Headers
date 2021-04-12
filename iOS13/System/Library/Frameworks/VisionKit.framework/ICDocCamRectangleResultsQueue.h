/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSMutableArray * array;              //@synthesize array=_array - In the implementation block
-(id)init;
-(void)clear;
-(NSMutableArray *)array;
-(void)setArray:(NSMutableArray *)arg1 ;
-(long long)size;
-(id)peek;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)peek:(long long)arg1 ;
-(id)peekTail;
-(void)apply:(/*^block*/id)arg1 atIndex:(long long)arg2 ;
@end

