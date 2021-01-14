/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_search;
-(unsigned long long)resultLimit;
-(id)init;
-(NSObject*<UIWebPDFSearchOperationDelegate>)searchDelegate;
-(BOOL)_hitSearchLimit;
-(CTFontRef)_fontWithPDFFont:(CGPDFFontRef)arg1 size:(double)arg2 ;
-(UIPDFDocument *)documentToSearch;
-(void)_notifyDelegateOfStatus;
-(id)sanitizedAttributedStringForAttributedString:(id)arg1 ;
-(unsigned long long)currentPageResultCount;
-(unsigned long long)startingPageIndex;
-(void)setStartingPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfResultsToSkip;
-(void)setNumberOfResultsToSkip:(unsigned long long)arg1 ;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(void)setSearchDelegate:(NSObject*<UIWebPDFSearchOperationDelegate>)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)main;
-(void)setSearchString:(NSString *)arg1 ;
-(void)cancel;
-(NSString *)searchString;
-(void)dealloc;
-(double)documentScale;
-(void)setDocumentToSearch:(UIPDFDocument *)arg1 ;
-(void)setDocumentScale:(double)arg1 ;
@end

