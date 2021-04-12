/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/CNUIUserActionListDataSource.h>
#import <libobjc.A.dylib/CNUIUserActionDisambiguationViewDataSource.h>

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
@required
-(id)categoriesForContactActionsView:(id)arg1;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;

@end


@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL tracksChanges; 
-(id)categoriesForContactActionsView:(id)arg1 ;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2 ;
@end

