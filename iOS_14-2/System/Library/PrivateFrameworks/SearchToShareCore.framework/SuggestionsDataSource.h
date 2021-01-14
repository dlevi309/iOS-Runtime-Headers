/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PopUpDataSource.h>
#import <libobjc.A.dylib/PopUpDelegate.h>

@protocol STSSearchModelUpdateDelegate, STSSuggestionSelectionDelegate;
@class STSSearchModel, NSString;

@interface SuggestionsDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, PopUpDataSource, PopUpDelegate> {

	BOOL _isScrolling;
	id<STSSearchModelUpdateDelegate> _updateDelgate;
	id<STSSuggestionSelectionDelegate> _selectionDelegate;
	STSSearchModel* _searchModel;

}

@property (nonatomic,retain) STSSearchModel * searchModel;                                             //@synthesize searchModel=_searchModel - In the implementation block
@property (assign) BOOL isScrolling;                                                                   //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<STSSearchModelUpdateDelegate> updateDelgate;                    //@synthesize updateDelgate=_updateDelgate - In the implementation block
@property (assign,nonatomic,__weak) id<STSSuggestionSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsScrolling:(BOOL)arg1 ;
-(STSSearchModel *)searchModel;
-(long long)numberOfRows;
-(void)setSearchModel:(STSSearchModel *)arg1 ;
-(void)clearSuggestions;
-(void)didSelectItemAtIndex:(long long)arg1 ;
-(BOOL)isScrolling;
-(id)initWithSearchModel:(id)arg1 ;
-(id<STSSuggestionSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSSuggestionSelectionDelegate>)arg1 ;
-(BOOL)isGroupRow:(long long)arg1 ;
-(id)stringValueForRowAtIndex:(long long)arg1 ;
-(id)headerTitleForRow:(long long)arg1 ;
-(BOOL)rowHasClearButton:(long long)arg1 ;
-(void)setUpdateDelgate:(id<STSSearchModelUpdateDelegate>)arg1 ;
-(void)updateQuerySuggestions:(id)arg1 ;
-(id<STSSearchModelUpdateDelegate>)updateDelgate;
@end

