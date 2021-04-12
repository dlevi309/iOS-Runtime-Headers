/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)numberOfSections;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)tableViewStyle;
-(NSArray *)concerns;
-(void)dealloc;
-(id)cellForIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(long long)selectedConcernIndex;
-(void)setSelectedConcernIndex:(long long)arg1 ;
-(SUTextViewCell *)textViewCell;
-(void)setConcerns:(NSArray *)arg1 ;
-(id)_titleCellForIndexPath:(id)arg1 ;
@end

