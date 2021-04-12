/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SXDraggable;
@class SXFill;

@interface SXFillView : UIView {

	SXFill* _fill;
	id<SXDraggable> _dragable;
	CGRect _originalFrame;

}

@property (nonatomic,readonly) SXFill * fill;                         //@synthesize fill=_fill - In the implementation block
@property (assign,nonatomic) CGRect originalFrame;                    //@synthesize originalFrame=_originalFrame - In the implementation block
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,readonly) id<SXDraggable> dragable;              //@synthesize dragable=_dragable - In the implementation block
-(void)load;
-(SXFill *)fill;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(CGRect)originalFrame;
-(id<SXDraggable>)dragable;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(void)setOriginalFrame:(CGRect)arg1 ;
@end

