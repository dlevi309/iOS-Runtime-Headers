/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	BOOL _selected;
	DOMHTMLOptionElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptionElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(id)node;
-(DOMHTMLOptionElement *)_node;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)isGroup;
-(void)set_node:(DOMHTMLOptionElement *)arg1 ;
-(void)unselect;
-(id)initWithHTMLOptionNode:(id)arg1 ;
@end

