/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextItemDiscoverable.h>

@protocol _UITextContent;
@class UIView, NSString;

@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable> {

	UIView*<_UITextContent> _view;

}

@property (nonatomic,__weak,readonly) UIView*<_UITextContent> view;                        //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
-(UIView*<_UITextContent>)view;
-(id)initWithView:(id)arg1 ;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(CGRect)_visibleBounds;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1 ;
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)visibleTextRange;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(id)_textReferenceView;
@end

