/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	BOOL _animated;

}

@property (assign,nonatomic) TSWPRep * target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;              //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint offset;                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL animated;                           //@synthesize animated=_animated - In the implementation block
-(void)setTarget:(TSWPRep *)arg1 ;
-(TSWPRep *)target;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)magnificationPoint;
@end

