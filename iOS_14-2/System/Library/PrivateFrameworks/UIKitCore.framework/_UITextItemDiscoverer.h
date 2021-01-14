/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)_visibleBounds;
-(id)visibleTextRange;
-(UIView*<_UITextContent>)view;
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2 ;
-(id)_textReferenceView;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1 ;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
@end

