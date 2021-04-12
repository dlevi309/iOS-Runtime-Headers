/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface WKTextSelectionRect : UITextSelectionRect {

	SelectionRect _selectionRect;

}
-(BOOL)isVertical;
-(CGRect)rect;
-(id)range;
-(id)initWithCGRect:(CGRect)arg1 ;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(long long)writingDirection;
-(id)initWithSelectionRect:(const SelectionRect*)arg1 ;
@end

