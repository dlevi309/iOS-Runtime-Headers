/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIFormPeripheral.h>

@protocol UIWebFormControl;
@class DOMHTMLSelectElement;

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {

	DOMHTMLSelectElement* _selectionNode;
	id<UIWebFormControl> _selectControl;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) id<UIWebFormControl> _selectControl;                //@synthesize selectControl=_selectControl - In the implementation block
+(id)createPeripheralWithDOMHTMLSelectElement:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(id)assistantView;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(DOMHTMLSelectElement *)_selectionNode;
-(void)set_selectControl:(id<UIWebFormControl>)arg1 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 ;
-(id<UIWebFormControl>)_selectControl;
@end

