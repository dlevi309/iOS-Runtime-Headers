/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)contentFrame;
-(SXFill *)fill;
-(void)setContentFrame:(CGRect)arg1 ;
-(CGRect)originalFrame;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(id<SXDraggable>)dragable;
-(void)setOriginalFrame:(CGRect)arg1 ;
@end

