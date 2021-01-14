/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGJournalContactsObserver.h>

@class SGSqlEntityStore, NSString;

@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver> {

	SGSqlEntityStore* _store;

}

@property (assign,nonatomic,__weak) SGSqlEntityStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStore:(SGSqlEntityStore *)arg1 ;
-(SGSqlEntityStore *)store;
-(void)addContact:(id)arg1 ;
-(void)confirmContact:(id)arg1 ;
-(void)rejectContact:(id)arg1 ;
-(void)removeAllStoredPseudoContacts;
-(id)initWithSGSqlEntityStore:(id)arg1 ;
@end

