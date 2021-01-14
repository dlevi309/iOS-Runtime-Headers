/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	DOMHTMLOptGroupElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptGroupElement * _node;              //@synthesize node=_node - In the implementation block
-(DOMHTMLOptGroupElement *)_node;
-(BOOL)isGroup;
-(id)node;
-(void)unselect;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)set_node:(DOMHTMLOptGroupElement *)arg1 ;
-(id)initWithHTMLOptGroupNode:(id)arg1 ;
-(void)dealloc;
@end

