/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/__PGView.h>

@class CAFilter, NSString;

@interface PGBackdropView : __PGView {

	CAFilter* _gaussianBlurFilter;
	CAFilter* _averageColorFilter;

}

@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) double gaussianBlurRadius; 
@property (assign,nonatomic) double backdropScale; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateFilters;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(double)backdropScale;
-(void)dealloc;
-(void)setGaussianBlurRadius:(double)arg1 ;
-(void)setBackdropScale:(double)arg1 ;
-(double)gaussianBlurRadius;
@end

