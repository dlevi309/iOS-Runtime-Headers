/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSceneLayoutReferenceOrientedView.h>

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView> {

	long long _layoutOrientation;
	long long _referenceOrientation;

}

@property (assign,nonatomic) long long referenceOrientation;               //@synthesize referenceOrientation=_referenceOrientation - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                  //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * elementWrapperViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)referenceOrientation;
-(long long)layoutOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setReferenceOrientation:(long long)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(NSString *)description;
-(NSArray *)elementWrapperViews;
-(void)invalidate;
-(id)elementWrapperViewForLayoutRole:(long long)arg1 ;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
@end

