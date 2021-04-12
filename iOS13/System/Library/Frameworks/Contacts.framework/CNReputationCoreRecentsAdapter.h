/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CRRecentContactsLibrary;

@interface CNReputationCoreRecentsAdapter : NSObject {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
-(id)init;
-(CRRecentContactsLibrary *)library;
-(id)recentContactsForHandle:(id)arg1 ;
-(id)initWithRecentContactsLibrary:(id)arg1 ;
@end

