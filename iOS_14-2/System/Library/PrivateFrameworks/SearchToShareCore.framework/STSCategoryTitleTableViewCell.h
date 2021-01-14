/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <UIKitCore/UITableViewCell.h>

@protocol STSCategoryTitleTableViewCellDelegate;
@class UIButton, STSCategoryResult;

@interface STSCategoryTitleTableViewCell : UITableViewCell {

	UIButton* _clearButton;
	BOOL _clearButtonHidden;
	STSCategoryResult* _result;
	id<STSCategoryTitleTableViewCellDelegate> _selectionDelegate;

}

@property (nonatomic,retain) STSCategoryResult * result;                                                      //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL clearButtonHidden;                                                          //@synthesize clearButtonHidden=_clearButtonHidden - In the implementation block
@property (assign,nonatomic,__weak) id<STSCategoryTitleTableViewCellDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
-(void)setResult:(STSCategoryResult *)arg1 ;
-(void)clearButtonPressed:(id)arg1 ;
-(STSCategoryResult *)result;
-(id<STSCategoryTitleTableViewCellDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<STSCategoryTitleTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setClearButtonHidden:(BOOL)arg1 ;
-(BOOL)clearButtonHidden;
@end

