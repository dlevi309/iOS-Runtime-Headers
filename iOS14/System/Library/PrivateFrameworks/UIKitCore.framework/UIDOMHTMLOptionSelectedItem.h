/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	BOOL _selected;
	DOMHTMLOptionElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptionElement * _node;              //@synthesize node=_node - In the implementation block
-(DOMHTMLOptionElement *)_node;
-(BOOL)isGroup;
-(id)node;
-(void)unselect;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)set_node:(DOMHTMLOptionElement *)arg1 ;
-(id)initWithHTMLOptionNode:(id)arg1 ;
-(void)dealloc;
@end

