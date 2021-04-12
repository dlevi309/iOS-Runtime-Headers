/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)locations;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setLocations:(NSArray *)arg1 ;
-(id)color;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
@end

