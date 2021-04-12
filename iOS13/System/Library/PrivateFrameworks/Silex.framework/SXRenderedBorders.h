/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class UIImage;

@interface SXRenderedBorders : NSObject {

	UIImage* _top;
	UIImage* _bottom;
	UIImage* _left;
	UIImage* _right;

}

@property (nonatomic,retain) UIImage * top;                 //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIImage * bottom;              //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) UIImage * left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,retain) UIImage * right;               //@synthesize right=_right - In the implementation block
-(UIImage *)left;
-(void)setLeft:(UIImage *)arg1 ;
-(UIImage *)top;
-(UIImage *)bottom;
-(UIImage *)right;
-(void)setBottom:(UIImage *)arg1 ;
-(void)setRight:(UIImage *)arg1 ;
-(void)setTop:(UIImage *)arg1 ;
@end

