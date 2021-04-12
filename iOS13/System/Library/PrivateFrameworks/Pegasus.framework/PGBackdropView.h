/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/__PGView.h>

@class NSString;

@interface PGBackdropView : __PGView

@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) double gaussianBlurRadius; 
@property (assign,nonatomic) double saturationAmount; 
@property (assign,nonatomic) double scale; 
+(Class)layerClass;
-(void)dealloc;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGaussianBlurRadius:(double)arg1 ;
-(void)setSaturationAmount:(double)arg1 ;
-(double)gaussianBlurRadius;
-(double)saturationAmount;
@end

