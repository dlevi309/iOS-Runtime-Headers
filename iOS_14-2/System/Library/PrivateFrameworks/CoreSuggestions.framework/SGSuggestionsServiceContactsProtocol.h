/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceContactsProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol,_SGSuggestionsServiceContactsObserverProtocol>
@required
-(id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)contactFromRecordID:(id)arg1 error:(id*)arg2;
-(void)allContactsWithSnippets:(BOOL)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 error:(id*)arg4;
-(void)contactFromRecordID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 onlySignificant:(BOOL)arg4 withCompletion:(/*^block*/id)arg5;
-(id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 onlySignificant:(BOOL)arg4 error:(id*)arg5;
-(id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2;
-(id)originFromRecordId:(id)arg1 error:(id*)arg2;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(/*^block*/id)arg4;
-(id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
-(id)cnContactMatchesForRecordIds:(id)arg1 error:(id*)arg2;
-(void)originFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

