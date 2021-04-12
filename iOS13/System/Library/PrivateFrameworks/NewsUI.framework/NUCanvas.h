/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NULayout.h>

@class NUViewNode;

@interface NUCanvas : NULayout {

	NUViewNode* _viewNode;
	CGRect _lastFrame;

}

@property (nonatomic,readonly) NUViewNode * viewNode;              //@synthesize viewNode=_viewNode - In the implementation block
@property (assign,nonatomic) CGRect lastFrame;                     //@synthesize lastFrame=_lastFrame - In the implementation block
+(id)canvasWithSizer:(id)arg1 options:(NULayoutOptions)arg2 inNode:(id)arg3 componentsBlock:(/*^block*/id)arg4 ;
+(id)canvasWithSizer:(id)arg1 options:(NULayoutOptions)arg2 componentsBlock:(/*^block*/id)arg3 ;
+(id)canvasWithSizer:(id)arg1 componentsBlock:(/*^block*/id)arg2 ;
-(void)setLastFrame:(CGRect)arg1 ;
-(id)resolveView;
-(void)layoutInBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
-(id)initWithNode:(id)arg1 sizer:(id)arg2 options:(NULayoutOptions)arg3 componentsBlock:(/*^block*/id)arg4 ;
-(NUViewNode *)viewNode;
-(void)layoutWithLayoutContext:(id)arg1 ;
-(CGRect)lastFrame;
-(void)layoutComponentsInBounds:(CGRect)arg1 layoutContext:(id)arg2 ;
@end

