/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/


@class CKContextResponse, NSString, NSLocale, NSDate, NSMutableArray;

@interface CKContextCompleter : NSObject {

	CKContextResponse* _response;
	NSString* _ignorePrefix;
	NSLocale* _searchLocale;
	AB _discarded;
	unsigned long long _couldHaveShown;
	NSString* _input;
	NSDate* _hideCompletionsAfterDate;
	BOOL _hideZKW;
	BOOL _hideCompletions;
	unsigned long long _mustPrefixMatchLength;
	NSMutableArray* _zkwResults;

}
-(void)dealloc;
-(id)initWithResponse:(id)arg1 ;
-(void)discard;
-(id)_resultsMatching:(id)arg1 ;
-(id)resultsMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2 ;
-(id)queriesMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 ;
@end

