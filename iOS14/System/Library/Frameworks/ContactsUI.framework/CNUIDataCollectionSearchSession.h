/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNUIDataCollectionSearchSession : NSObject {

	BOOL _pendingResults;
	BOOL _pendingSuggestionsResults;

}

@property (assign,nonatomic) BOOL pendingResults;                         //@synthesize pendingResults=_pendingResults - In the implementation block
@property (assign,nonatomic) BOOL pendingSuggestionsResults;              //@synthesize pendingSuggestionsResults=_pendingSuggestionsResults - In the implementation block
+(void)end;
+(void)begin;
+(id)currentSession;
-(BOOL)pendingResults;
-(void)searchStringDidChange;
-(void)didFetchResultSuggested:(BOOL)arg1 ;
-(void)didSelectResult:(id)arg1 ;
-(void)setPendingResults:(BOOL)arg1 ;
-(BOOL)pendingSuggestionsResults;
-(void)setPendingSuggestionsResults:(BOOL)arg1 ;
@end

