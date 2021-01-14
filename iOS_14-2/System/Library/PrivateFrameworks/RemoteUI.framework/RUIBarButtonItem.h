/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem, NSString;

@interface RUIBarButtonItem : RUIElement {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _action;

}

@property (nonatomic,copy) id action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
@property (nonatomic,readonly) NSString * itemType; 
-(UIBarButtonItem *)barButtonItem;
-(void)setEnabled:(BOOL)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(NSString *)itemType;
-(id)_labelColor;
-(void)_buttonPressed:(id)arg1 ;
@end

