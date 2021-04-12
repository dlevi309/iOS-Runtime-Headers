/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)left;
-(id)bottomLeft;
-(id)center;
-(id)right;
-(id)topLeft;
-(id)topRight;
-(id)bottom;
-(id)top;
-(id)bottomRight;
-(BOOL)tileCenterAndEdges;
-(id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(BOOL)arg10 ;
-(void)dealloc;
@end

