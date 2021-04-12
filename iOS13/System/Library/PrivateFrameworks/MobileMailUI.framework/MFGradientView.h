/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, NSArray;

@interface MFGradientView : UIView

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,retain) NSArray * gradientColors; 
@property (nonatomic,retain) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CAGradientLayer *)gradientLayer;
-(NSArray *)gradientColors;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

