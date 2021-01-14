/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIDefaultUserActionFetcher.h>

@protocol CNUIDefaultUserActionFetcher <NSObject>
@required
-(id)observableForDefaultActionsChanged;
-(id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2;

@end


@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher> {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recentContactsForUserActionItem:(id)arg1 recentsLibrary:(id)arg2 scheduler:(id)arg3 ;
+(id)defaultActionItemForActionItem:(id)arg1 recentContacts:(id)arg2 ;
+(id)queryForUserActionItem:(id)arg1 ;
+(BOOL)doesRecentContact:(id)arg1 matchUserActionItem:(id)arg2 ;
-(CRRecentContactsLibrary *)library;
-(id)init;
-(id)observableForDefaultActionsChanged;
-(id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithRecentsLibrary:(id)arg1 ;
@end

