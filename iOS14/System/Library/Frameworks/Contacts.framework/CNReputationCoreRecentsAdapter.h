/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CRRecentContactsLibrary;

@interface CNReputationCoreRecentsAdapter : NSObject {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
-(CRRecentContactsLibrary *)library;
-(id)init;
-(id)recentContactsForHandle:(id)arg1 ;
-(id)initWithRecentContactsLibrary:(id)arg1 ;
@end

