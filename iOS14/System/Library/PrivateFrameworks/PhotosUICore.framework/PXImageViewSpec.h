/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXViewSpec.h>

@class NSArray;

@interface PXImageViewSpec : PXViewSpec {

	BOOL _shouldEnableFocus;
	NSArray* _overlaySpecs;
	long long _roundedCornersMode;

}

@property (nonatomic,copy) NSArray * overlaySpecs;                                        //@synthesize overlaySpecs=_overlaySpecs - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableFocus;                                      //@synthesize shouldEnableFocus=_shouldEnableFocus - In the implementation block
@property (assign,nonatomic) long long roundedCornersMode;                                //@synthesize roundedCornersMode=_roundedCornersMode - In the implementation block
@property (nonatomic,readonly) CGPoint floatingContentMotionRotation; 
@property (nonatomic,readonly) CGPoint floatingContentMotionTranslation; 
@property (nonatomic,readonly) double floatingUnfocusedShadowOpacity; 
@property (nonatomic,readonly) double floatingShadowOpacity; 
@property (nonatomic,readonly) double floatingUnfocusedShadowRadius; 
@property (nonatomic,readonly) double floatingShadowRadius; 
@property (nonatomic,readonly) double floatingUnfocusedShadowVerticalOffset; 
@property (nonatomic,readonly) CGSize floatingUnfocusedShadowExpansion; 
@property (nonatomic,readonly) double focusedSizeIncrease; 
-(id)init;
-(CGPoint)floatingContentMotionRotation;
-(CGPoint)floatingContentMotionTranslation;
-(double)floatingUnfocusedShadowOpacity;
-(double)floatingShadowOpacity;
-(double)floatingUnfocusedShadowRadius;
-(double)floatingShadowRadius;
-(double)floatingUnfocusedShadowVerticalOffset;
-(CGSize)floatingUnfocusedShadowExpansion;
-(NSArray *)overlaySpecs;
-(void)setOverlaySpecs:(NSArray *)arg1 ;
-(BOOL)shouldEnableFocus;
-(void)setShouldEnableFocus:(BOOL)arg1 ;
-(long long)roundedCornersMode;
-(void)setRoundedCornersMode:(long long)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)focusedSizeIncrease;
@end

