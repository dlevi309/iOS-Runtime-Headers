/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
*/


#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
@class CIFilter;

@interface PBFilter : NSObject {

	CIFilter* _ciFilter;
	CIFilter* _wrapMirrorFilter;

}
+(id)filterWithName:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)localizedName;
-(void)setDefaults;
-(id)inputKeys;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
-(id)createOutputImage:(id)arg1 mirrored:(BOOL)arg2 size:(CGSize)arg3 ;
-(void)resetInputImage;
-(id)ciFilter;
-(BOOL)allowAbsoluteGestures;
-(id)_presentationName;
-(void)renderWithContext:(id)arg1 inputSize:(CGSize)arg2 outputRect:(CGRect)arg3 mirrored:(BOOL)arg4 ;
-(CGPoint)pointValueForKeyIfSupported:(id)arg1 ;
-(float)floatValueForKeyIfSupported:(id)arg1 ;
-(void)setPointValue:(CGPoint)arg1 forKeyIfSupported:(id)arg2 ;
-(void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2 ;
-(void)handleTapGesture:(CGPoint)arg1 viewSize:(CGSize)arg2 mirror:(BOOL)arg3 ;
-(void)handleGestureAtLocations:(CGPoint*)arg1 count:(int)arg2 translation:(CGPoint)arg3 viewSize:(CGSize)arg4 stateBegan:(BOOL)arg5 mirror:(BOOL)arg6 ;
-(void)handlePanGesture:(CGPoint)arg1 viewSize:(CGSize)arg2 stateBegan:(BOOL)arg3 mirror:(BOOL)arg4 ;
-(void)handlePinchGesture:(float)arg1 stateBegan:(BOOL)arg2 ;
-(void)handleRotateGesture:(float)arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3 ;
@end

