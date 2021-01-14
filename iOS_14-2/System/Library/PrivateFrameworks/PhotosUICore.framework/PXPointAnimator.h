/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutablePointAnimator.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXNumberAnimatorDisplayLinkTarget.h>

@protocol PXMutableNumberAnimator;
@class PXNumberAnimator, NSString;

@interface PXPointAnimator : PXObservable <PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget> {

	PXNumberAnimator*<PXMutableNumberAnimator> _xAnimator;
	PXNumberAnimator*<PXMutableNumberAnimator> _yAnimator;
	BOOL _isAnimating;
	NSString* _label;
	CGPoint _value;
	CGPoint _presentationValue;

}

@property (assign,nonatomic) BOOL isAnimating;                                                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) CGPoint presentationValue;                                           //@synthesize presentationValue=_presentationValue - In the implementation block
@property (nonatomic,readonly) CGPoint value;                                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,copy) NSString * label;                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator*<PXMutableNumberAnimator> xAnimator; 
@property (nonatomic,readonly) PXNumberAnimator*<PXMutableNumberAnimator> yAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performChangesWithoutAnimation:(/*^block*/id)arg1 ;
-(id)init;
-(CGPoint)presentationValue;
-(void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(CGPoint)arg3 changes:(/*^block*/id)arg4 ;
-(void)didPerformChanges;
-(void)setIsAnimating:(BOOL)arg1 ;
-(id)initWithValue:(CGPoint)arg1 ;
-(void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(/*^block*/id)arg3 ;
-(void)setValue:(CGPoint)arg1 ;
-(NSString *)description;
-(void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(CGPoint)arg1 changes:(/*^block*/id)arg2 ;
-(void)setPresentationValue:(CGPoint)arg1 ;
-(id)initWithValue:(CGPoint)arg1 epsilon:(double)arg2 ;
-(void)_update;
-(id)mutableChangeObject;
-(CGPoint)approximateVelocity;
-(void)setLabel:(NSString *)arg1 ;
-(PXNumberAnimator*<PXMutableNumberAnimator>)xAnimator;
-(double)epsilon;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isAnimating;
-(void)_setInternalValue:(CGPoint)arg1 ;
-(NSString *)label;
-(PXNumberAnimator*<PXMutableNumberAnimator>)yAnimator;
-(CGPoint)value;
-(void)_handleDisplayLink:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

