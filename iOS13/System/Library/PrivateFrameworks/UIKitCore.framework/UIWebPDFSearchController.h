/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIWebPDFSearchOperationDelegate.h>

@protocol UIWebPDFSearchControllerDelegate;
@class NSOperationQueue, NSMutableArray, NSString, UIPDFDocument, NSObject, NSArray;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {

	unsigned long long _resultIndexWhenLimitHit;
	BOOL _notifiedThatSearchBegin;
	unsigned long long _pageIndexWhenLimitHit;
	NSOperationQueue* _searchQueue;
	NSMutableArray* _results;
	NSString* _searchString;
	UIPDFDocument* _documentToSearch;
	NSObject*<UIWebPDFSearchControllerDelegate> searchDelegate;
	unsigned long long startingPageIndex;
	double documentScale;
	unsigned long long resultLimit;

}

@property (nonatomic,retain) NSArray * results;                                                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                                 //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) NSObject*<UIWebPDFSearchControllerDelegate> searchDelegate; 
@property (nonatomic,retain) UIPDFDocument * documentToSearch;                                        //@synthesize documentToSearch=_documentToSearch - In the implementation block
@property (assign,nonatomic) double documentScale; 
@property (assign,nonatomic) unsigned long long startingPageIndex; 
@property (assign,nonatomic) unsigned long long resultLimit; 
@property (nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) BOOL paused; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)pause;
-(void)resume;
-(NSArray *)results;
-(unsigned long long)resultLimit;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(BOOL)paused;
-(NSString *)searchString;
-(void)setSearchDelegate:(NSObject*<UIWebPDFSearchControllerDelegate>)arg1 ;
-(void)search:(id)arg1 ;
-(void)searchDidBegin:(id)arg1 ;
-(void)searchDidTimeOut:(id)arg1 ;
-(void)searchWasCancelled:(id)arg1 ;
-(void)searchLimitHit:(id)arg1 ;
-(void)searchDidFinish:(id)arg1 ;
-(void)search:(id)arg1 hasPartialResults:(id)arg2 ;
-(double)documentScale;
-(void)setDocumentToSearch:(UIPDFDocument *)arg1 ;
-(void)setDocumentScale:(double)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(UIPDFDocument *)documentToSearch;
-(unsigned long long)startingPageIndex;
-(void)setStartingPageIndex:(unsigned long long)arg1 ;
-(NSObject*<UIWebPDFSearchControllerDelegate>)searchDelegate;
-(unsigned long long)_actualStartingPageIndex;
-(void)_clearSearchQueue;
-(BOOL)searching;
-(void)setResults:(NSArray *)arg1 ;
@end

