/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)assistantView;
-(void)endEditing;
-(DOMHTMLSelectElement *)_selectionNode;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(void)set_selectControl:(id<UIWebFormControl>)arg1 ;
-(id<UIWebFormControl>)_selectControl;
-(id)initWithDOMHTMLSelectElement:(id)arg1 ;
-(void)dealloc;
-(void)beginEditing;
@end

