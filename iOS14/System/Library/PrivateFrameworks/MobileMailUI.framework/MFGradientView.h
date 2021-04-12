/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)locations;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setLocations:(NSArray *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(NSArray *)gradientColors;
-(void)setGradientColors:(NSArray *)arg1 ;
@end

