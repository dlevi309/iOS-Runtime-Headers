/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Foundation/NSOperation.h>

@protocol PSSearchOperationDelegate;
@class NSString, NSSet, PSSearchResults;

@interface PSSearchOperation : NSOperation {

	BOOL _newQuery;
	NSString* _query;
	NSSet* _rootEntries;
	PSSearchResults* _currentResults;
	id<PSSearchOperationDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSSet * rootEntries;                   //@synthesize rootEntries=_rootEntries - In the implementation block
@property (copy,readonly) PSSearchResults * currentResults;                //@synthesize currentResults=_currentResults - In the implementation block
@property (assign,getter=isNewQuery,nonatomic) BOOL newQuery;              //@synthesize newQuery=_newQuery - In the implementation block
@property (__weak) id<PSSearchOperationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(CFStringTokenizerRef)_wordBoundaryTokenizer;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id<PSSearchOperationDelegate>)delegate;
-(void)setDelegate:(id<PSSearchOperationDelegate>)arg1 ;
-(NSString *)query;
-(void)main;
-(PSSearchResults *)currentResults;
-(BOOL)isNewQuery;
-(id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2 ;
-(void)setNewQuery:(BOOL)arg1 ;
-(NSSet *)rootEntries;
-(void)_didCancel;
-(BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2 ;
-(id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_systemLanguageHasContinuousScript;
@end

