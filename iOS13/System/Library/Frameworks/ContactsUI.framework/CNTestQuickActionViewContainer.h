/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactQuickActionViewContainer.h>

@class UITraitCollection, NSDictionary, NSString;

@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer> {

	NSDictionary* _actionViewsByActionType;

}

@property (nonatomic,readonly) NSDictionary * actionViewsByActionType;              //@synthesize actionViewsByActionType=_actionViewsByActionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
-(id)viewForActionType:(id)arg1 ;
-(id)initWithActionTypes:(id)arg1 ;
-(NSDictionary *)actionViewsByActionType;
@end

