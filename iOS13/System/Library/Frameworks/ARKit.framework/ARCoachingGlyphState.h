/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol ARCoachingGlyphStateDelegate;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingGlyphState : NSObject {

	compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > _quaternionTarget;
	 _scaleTarget;
	unsigned long long _snapState;
	BOOL _isVertical;
	id<ARCoachingGlyphStateDelegate> _delegate;
	 _topPlaneTranslationTarget;
	 _bottomPlaneTranslationTarget;

}

@property (assign,nonatomic,__weak) id<ARCoachingGlyphStateDelegate> delegate;                                                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long snapState; 
@property (nonatomic,readonly) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > quaternionTarget; 
@property (nonatomic,readonly)  scaleTarget; 
@property (nonatomic,readonly)  topPlaneTranslationTarget;                                                                                                                                  //@synthesize topPlaneTranslationTarget=_topPlaneTranslationTarget - In the implementation block
@property (nonatomic,readonly)  bottomPlaneTranslationTarget;                                                                                                                               //@synthesize bottomPlaneTranslationTarget=_bottomPlaneTranslationTarget - In the implementation block
@property (assign,nonatomic) BOOL isVertical;                                                                                                                                               //@synthesize isVertical=_isVertical - In the implementation block
-(id)init;
-(id<ARCoachingGlyphStateDelegate>)delegate;
-(void)setDelegate:(id<ARCoachingGlyphStateDelegate>)arg1 ;
-(BOOL)isVertical;
-(void)setIsVertical:(BOOL)arg1 ;
-(unsigned long long)snapState;
-(void)setSnapState:(unsigned long long)arg1 ;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)computeQuaternionTarget;
-(void)setQuaternionTarget:(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)arg1 ;
-(1)computeScaleTarget;
-(void)setScaleTarget:;
-(1)computeTopPlaneTranslationTarget;
-(void)setTopPlaneTranslationTarget:;
-(1)computeBottomPlaneTranslationTarget;
-(void)setBottomPlaneTranslationTarget:;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >)quaternionTarget;
-()scaleTarget;
-()topPlaneTranslationTarget;
-()bottomPlaneTranslationTarget;
@end

