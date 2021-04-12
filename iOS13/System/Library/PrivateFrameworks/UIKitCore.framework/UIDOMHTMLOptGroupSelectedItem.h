/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	DOMHTMLOptGroupElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptGroupElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(id)node;
-(DOMHTMLOptGroupElement *)_node;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)isGroup;
-(void)set_node:(DOMHTMLOptGroupElement *)arg1 ;
-(void)unselect;
-(id)initWithHTMLOptGroupNode:(id)arg1 ;
@end

