/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol ARCoachingGlyphStateDelegate;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingGlyphState : NSObject {

	SCD_Struct_AR10 _quaternionTarget;
	 _scaleTarget;
	unsigned long long _snapState;
	BOOL _isVertical;
	id<ARCoachingGlyphStateDelegate> _delegate;
	 _topPlaneTranslationTarget;
	 _bottomPlaneTranslationTarget;

}

@property (assign,nonatomic,__weak) id<ARCoachingGlyphStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long snapState; 
@property (nonatomic,readonly) SCD_Struct_AR10 quaternionTarget; 
@property (nonatomic,readonly)  scaleTarget; 
@property (nonatomic,readonly)  topPlaneTranslationTarget;                                  //@synthesize topPlaneTranslationTarget=_topPlaneTranslationTarget - In the implementation block
@property (nonatomic,readonly)  bottomPlaneTranslationTarget;                               //@synthesize bottomPlaneTranslationTarget=_bottomPlaneTranslationTarget - In the implementation block
@property (assign,nonatomic) BOOL isVertical;                                               //@synthesize isVertical=_isVertical - In the implementation block
-(BOOL)isVertical;
-(id)init;
-(id<ARCoachingGlyphStateDelegate>)delegate;
-(void)setIsVertical:(BOOL)arg1 ;
-(void)setDelegate:(id<ARCoachingGlyphStateDelegate>)arg1 ;
-(unsigned long long)snapState;
-(void)setSnapState:(unsigned long long)arg1 ;
-(SCD_Struct_AR10)computeQuaternionTarget;
-(void)setQuaternionTarget:(SCD_Struct_AR10)arg1 ;
-(1)computeScaleTarget;
-(void)setScaleTarget:;
-(1)computeTopPlaneTranslationTarget;
-(void)setTopPlaneTranslationTarget:;
-(1)computeBottomPlaneTranslationTarget;
-(void)setBottomPlaneTranslationTarget:;
-(SCD_Struct_AR10)quaternionTarget;
-()scaleTarget;
-()topPlaneTranslationTarget;
-()bottomPlaneTranslationTarget;
@end

