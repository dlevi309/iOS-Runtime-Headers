/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface SXDataTableDrawView : UIView {

	NSMutableArray* _drawBlocks;

}

@property (nonatomic,retain) NSMutableArray * drawBlocks;              //@synthesize drawBlocks=_drawBlocks - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGPoint)originOffset;
-(NSMutableArray *)drawBlocks;
-(void)setDrawBlocks:(NSMutableArray *)arg1 ;
@end

