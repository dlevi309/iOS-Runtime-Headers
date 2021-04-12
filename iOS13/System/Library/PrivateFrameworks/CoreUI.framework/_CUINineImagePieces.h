/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@class CUIImage;

@interface _CUINineImagePieces : NSObject {

	CUIImage* _center;
	CUIImage* _topLeft;
	CUIImage* _top;
	CUIImage* _topRight;
	CUIImage* _right;
	CUIImage* _bottomRight;
	CUIImage* _bottom;
	CUIImage* _bottomLeft;
	CUIImage* _left;
	BOOL _tileCenterAndEdges;

}
-(void)dealloc;
-(id)left;
-(id)topLeft;
-(id)topRight;
-(id)bottomLeft;
-(id)bottomRight;
-(id)center;
-(id)top;
-(id)bottom;
-(id)right;
-(id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(BOOL)arg10 ;
-(BOOL)tileCenterAndEdges;
@end

