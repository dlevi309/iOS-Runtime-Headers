/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPPadding : NSObject {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (assign,nonatomic) double topInset;                 //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double leftInset;                //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double bottomInset;              //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) double rightInset;               //@synthesize rightInset=_rightInset - In the implementation block
+(id)padding;
+(id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
-(double)leftInset;
-(double)bottomInset;
-(double)rightInset;
-(void)setLeftInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
-(void)transform:(CGAffineTransform)arg1 ;
-(id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4 ;
@end

