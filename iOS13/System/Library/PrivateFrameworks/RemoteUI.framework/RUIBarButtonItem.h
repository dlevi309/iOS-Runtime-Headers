/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem;

@interface RUIBarButtonItem : RUIElement {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _action;

}

@property (nonatomic,copy) id action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
-(void)setEnabled:(BOOL)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)_buttonPressed:(id)arg1 ;
@end

