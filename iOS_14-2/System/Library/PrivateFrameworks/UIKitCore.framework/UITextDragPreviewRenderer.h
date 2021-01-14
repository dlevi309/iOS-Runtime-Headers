/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSLayoutManager;

@interface UITextDragPreviewRenderer : NSObject {

	NSRange _range;
	CGRect _firstRect;
	CGRect _lastRect;
	CGRect _middleRect;
	CGPoint _origin;
	UIImage* _image;
	BOOL _calculated;
	BOOL _unifyRects;
	NSLayoutManager* _layoutManager;

}

@property (nonatomic,readonly) NSLayoutManager * layoutManager;              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) CGRect firstLineRect; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) CGRect lastLineRect; 
-(CGRect)bodyRect;
-(NSLayoutManager *)layoutManager;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3 ;
-(UIImage *)image;
-(CGRect)firstLineRect;
-(CGRect)lastLineRect;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg1 ;
-(CGRect)_correctlyOffsetBoundingRect;
-(CGRect)_rawBoundingRect;
-(void)adjustFirstLineRect:(inout CGRect*)arg1 bodyRect:(inout CGRect*)arg2 lastLineRect:(inout CGRect*)arg3 textOrigin:(CGPoint)arg4 ;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 ;
@end

