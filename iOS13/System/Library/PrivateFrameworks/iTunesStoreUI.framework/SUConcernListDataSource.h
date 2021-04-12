/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource {

	NSArray* _concerns;
	long long _selectedConcernIndex;
	SUTextViewCell* _textViewCell;

}

@property (nonatomic,retain) NSArray * concerns;                           //@synthesize concerns=_concerns - In the implementation block
@property (assign,nonatomic) long long selectedConcernIndex;               //@synthesize selectedConcernIndex=_selectedConcernIndex - In the implementation block
@property (nonatomic,readonly) SUTextViewCell * textViewCell;              //@synthesize textViewCell=_textViewCell - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(id)cellForIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(long long)selectedConcernIndex;
-(void)setSelectedConcernIndex:(long long)arg1 ;
-(SUTextViewCell *)textViewCell;
-(void)setConcerns:(NSArray *)arg1 ;
-(NSArray *)concerns;
-(id)_titleCellForIndexPath:(id)arg1 ;
@end

