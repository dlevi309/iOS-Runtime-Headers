/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/


@class CKContextResponse, NSString, NSLocale, NSArray, NSDate, NSMutableArray;

@interface CKContextCompleter : NSObject {

	CKContextResponse* _response;
	NSString* _ignorePrefix;
	NSLocale* _searchLocale;
	AB _discarded;
	AB _engaged;
	AQ _inputKeystrokes;
	NSArray* _couldHaveShown;
	NSString* _input;
	NSDate* _hideCompletionsAfterDate;
	BOOL _hideZKW;
	BOOL _hideCompletions;
	unsigned long long _mustPrefixMatchLength;
	NSMutableArray* _zkwResults;
	unsigned long long _creationTime;
	BOOL _likelyUnsolicited;

}
-(id)initWithResponse:(id)arg1 ;
-(void)discard;
-(id)_resultsMatching:(id)arg1 ;
-(id)resultsMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3 ;
-(id)queriesMatching:(id)arg1 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2 ;
-(id)resultsMatchingTags:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 ;
-(void)dealloc;
@end

