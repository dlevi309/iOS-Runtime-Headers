/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CAGradientLayer;

@interface ICGradientView : UIView {

	NSArray* _gradientColors;

}

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,copy) NSArray * gradientColors;                         //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CAGradientLayer *)gradientLayer;
-(NSArray *)gradientColors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(void)updateLayerColors;
@end

