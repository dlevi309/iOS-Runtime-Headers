/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

@class NSArray, UIScrollView;


@protocol _UIDocumentPickerContainedViewController <NSObject,UISearchControllerDelegate>
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) long long displayMode; 
@property (nonatomic,readonly) BOOL supportsActions; 
@required
-(NSArray *)indexPathsForSelectedItems;
-(UIScrollView *)scrollView;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1;
-(BOOL)supportsActions;
-(void)setServiceViewController:(id)arg1;
-(void)setIndexPathsForSelectedItems:(id)arg1;
-(void)setSortView:(id)arg1;
-(void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
-(void)scrollSortViewToVisible;

@end

