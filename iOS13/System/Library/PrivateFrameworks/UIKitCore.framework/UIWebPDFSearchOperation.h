/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <Foundation/NSOperation.h>

@protocol UIWebPDFSearchOperationDelegate;
@class NSMutableArray, UIPDFDocument, NSObject, NSString;

@interface UIWebPDFSearchOperation : NSOperation {

	NSMutableArray* _results;
	unsigned long long _pageIndex;
	unsigned long long _numberOfResultsToSkip;
	unsigned long long _totalResultsCount;
	unsigned long long _currentPageResultCount;
	BOOL _complete;
	unsigned long long startingPageIndex;
	UIPDFDocument* documentToSearch;
	NSObject*<UIWebPDFSearchOperationDelegate> searchDelegate;
	double documentScale;
	NSString* searchString;
	unsigned long long resultLimit;

}

@property (assign) NSObject*<UIWebPDFSearchOperationDelegate> searchDelegate; 
@property (nonatomic,readonly) unsigned long long currentPageResultCount;                  //@synthesize currentPageResultCount=_currentPageResultCount - In the implementation block
@property (retain) UIPDFDocument * documentToSearch; 
@property (nonatomic,readonly) unsigned long long currentPageIndex;                        //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long startingPageIndex; 
@property (assign,nonatomic) unsigned long long numberOfResultsToSkip;                     //@synthesize numberOfResultsToSkip=_numberOfResultsToSkip - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit; 
@property (nonatomic,retain) NSString * searchString; 
@property (assign,nonatomic) double documentScale; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)main;
-(unsigned long long)resultLimit;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(NSString *)searchString;
-(void)setSearchDelegate:(NSObject*<UIWebPDFSearchOperationDelegate>)arg1 ;
-(double)documentScale;
-(void)setDocumentToSearch:(UIPDFDocument *)arg1 ;
-(void)setDocumentScale:(double)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)_hitSearchLimit;
-(CTFontRef)_fontWithPDFFont:(CGPDFFontRef)arg1 size:(double)arg2 ;
-(UIPDFDocument *)documentToSearch;
-(id)sanitizedAttributedStringForAttributedString:(id)arg1 ;
-(void)_search;
-(void)_notifyDelegateOfStatus;
-(unsigned long long)currentPageResultCount;
-(unsigned long long)startingPageIndex;
-(void)setStartingPageIndex:(unsigned long long)arg1 ;
-(NSObject*<UIWebPDFSearchOperationDelegate>)searchDelegate;
-(unsigned long long)numberOfResultsToSkip;
-(void)setNumberOfResultsToSkip:(unsigned long long)arg1 ;
@end

