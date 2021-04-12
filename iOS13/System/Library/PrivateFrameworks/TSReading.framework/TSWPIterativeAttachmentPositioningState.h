/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSArray;

@interface TSWPIterativeAttachmentPositioningState : NSObject {

	unsigned long long _passCount;
	NSArray* _passPositions;
	double _mismatch;
	double _smallestMismatch;
	CGPoint _position;
	CGPoint _bestPosition;

}

@property (nonatomic,readonly) unsigned long long passCount;              //@synthesize passCount=_passCount - In the implementation block
@property (nonatomic,readonly) NSArray * passPositions;                   //@synthesize passPositions=_passPositions - In the implementation block
@property (nonatomic,readonly) CGPoint position;                          //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) double mismatch;                           //@synthesize mismatch=_mismatch - In the implementation block
@property (nonatomic,readonly) double smallestMismatch;                   //@synthesize smallestMismatch=_smallestMismatch - In the implementation block
@property (nonatomic,readonly) CGPoint bestPosition;                      //@synthesize bestPosition=_bestPosition - In the implementation block
-(id)init;
-(void)dealloc;
-(CGPoint)position;
-(unsigned long long)passCount;
-(BOOL)hasLoopInLastPasses;
-(CGPoint)bestPosition;
-(double)smallestMismatch;
-(void)setPosition:(CGPoint)arg1 mismatch:(double)arg2 ;
-(void)setPosition:(CGPoint)arg1 mismatch:(double)arg2 afterLoop:(BOOL)arg3 ;
-(NSArray *)passPositions;
-(double)mismatch;
@end

