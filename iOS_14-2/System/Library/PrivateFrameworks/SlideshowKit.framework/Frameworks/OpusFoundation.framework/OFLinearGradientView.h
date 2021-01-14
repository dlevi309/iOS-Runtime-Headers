/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class NSArray;

@interface OFLinearGradientView : OFUIView

@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSArray * colors; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(NSArray *)locations;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setLocations:(NSArray *)arg1 ;
-(id)gradientLayer;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)dealloc;
@end

