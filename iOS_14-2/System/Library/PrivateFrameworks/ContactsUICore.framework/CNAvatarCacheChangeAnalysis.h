/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class NSData, NSArray;

@interface CNAvatarCacheChangeAnalysis : NSObject {

	NSData* _currentChangeHistoryToken;
	NSArray* _identifiersOfAffectedContacts;

}

@property (nonatomic,copy,readonly) NSData * currentChangeHistoryToken;                   //@synthesize currentChangeHistoryToken=_currentChangeHistoryToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifiersOfAffectedContacts;              //@synthesize identifiersOfAffectedContacts=_identifiersOfAffectedContacts - In the implementation block
-(id)description;
-(NSArray *)identifiersOfAffectedContacts;
-(NSData *)currentChangeHistoryToken;
-(id)initWithCurrentChangeHistoryToken:(id)arg1 identifiersOfAffectedContacts:(id)arg2 ;
@end

