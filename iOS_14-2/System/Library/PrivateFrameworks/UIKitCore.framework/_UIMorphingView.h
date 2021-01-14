/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableOrderedSet, UIView;

@interface _UIMorphingView : UIView {

	BOOL _useOpacityPairFilter;
	double _progress;
	NSMutableOrderedSet* _contentViews;
	UIView* _opacityPairSourceView;
	CGRect _initialBounds;

}

@property (nonatomic,retain) NSMutableOrderedSet * contentViews;                 //@synthesize contentViews=_contentViews - In the implementation block
@property (assign,nonatomic) CGRect initialBounds;                               //@synthesize initialBounds=_initialBounds - In the implementation block
@property (assign,nonatomic,__weak) UIView * opacityPairSourceView;              //@synthesize opacityPairSourceView=_opacityPairSourceView - In the implementation block
@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL useOpacityPairFilter;                          //@synthesize useOpacityPairFilter=_useOpacityPairFilter - In the implementation block
-(void)addContentView:(id)arg1 ;
-(NSMutableOrderedSet *)contentViews;
-(void)setContentViews:(NSMutableOrderedSet *)arg1 ;
-(void)setInitialBounds:(CGRect)arg1 ;
-(BOOL)useOpacityPairFilter;
-(CGRect)initialBounds;
-(UIView *)opacityPairSourceView;
-(void)setOpacityPairSourceView:(UIView *)arg1 ;
-(void)_updateMorphProgress;
-(double)progress;
-(id)_currentDestinationView;
-(void)setUseOpacityPairFilter:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
@end

