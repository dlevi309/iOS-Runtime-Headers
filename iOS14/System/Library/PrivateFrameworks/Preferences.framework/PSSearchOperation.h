/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)query;
-(BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2 ;
-(id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_systemLanguageHasContinuousScript;
-(id<PSSearchOperationDelegate>)delegate;
-(id)debugDescription;
-(void)setDelegate:(id<PSSearchOperationDelegate>)arg1 ;
-(id)description;
-(void)setNewQuery:(BOOL)arg1 ;
-(BOOL)isNewQuery;
-(void)main;
-(PSSearchResults *)currentResults;
-(id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2 ;
-(void)_didCancel;
-(void)dealloc;
-(NSSet *)rootEntries;
@end

