/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFAction, WFUberProduct, NSString;

@interface WFUberSeatCountPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	WFAction* _action;
	WFUberProduct* _product;

}

@property (nonatomic,retain) WFAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) WFUberProduct * product;               //@synthesize product=_product - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(BOOL)isHidden;
-(void)setAction:(WFAction *)arg1 ;
-(void)setProduct:(WFUberProduct *)arg1 ;
-(WFUberProduct *)product;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)updateProduct;
@end

