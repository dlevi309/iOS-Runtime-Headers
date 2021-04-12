/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBGradientView : UIView {

	NSArray* _colors;

}

@property (nonatomic,copy) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
+(Class)layerClass;
-(id)color;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

