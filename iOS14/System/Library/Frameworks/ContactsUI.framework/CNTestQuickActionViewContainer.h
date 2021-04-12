/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactQuickActionViewContainer.h>

@class UITraitCollection, NSDictionary, NSString;

@interface CNTestQuickActionViewContainer : NSObject <CNContactQuickActionViewContainer> {

	NSDictionary* _actionViewsByActionType;

}

@property (nonatomic,readonly) NSDictionary * actionViewsByActionType;              //@synthesize actionViewsByActionType=_actionViewsByActionType - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForActionType:(id)arg1 ;
-(id)initWithActionTypes:(id)arg1 ;
-(NSDictionary *)actionViewsByActionType;
@end

