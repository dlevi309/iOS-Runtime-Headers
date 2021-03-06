/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICommand.h>

@class UICommand, UICommandAlternate;

@interface _UIValidatableCommand : UICommand {

	UICommand* _command;
	UICommandAlternate* _alternate;

}
-(id)init;
-(SEL)action;
-(id)alternates;
-(void)useCommand:(id)arg1 alternate:(id)arg2 ;
-(id)propertyList;
@end

