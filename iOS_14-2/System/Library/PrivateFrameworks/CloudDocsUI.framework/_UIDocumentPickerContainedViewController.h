/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

@class NSArray, UIScrollView;


@protocol _UIDocumentPickerContainedViewController <NSObject,UISearchControllerDelegate>
@property (nonatomic,retain) NSArray * indexPathsForSelectedItems; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) long long displayMode; 
@property (nonatomic,readonly) BOOL supportsActions; 
@required
-(long long)displayMode;
-(NSArray *)indexPathsForSelectedItems;
-(void)setDisplayMode:(long long)arg1;
-(UIScrollView *)scrollView;
-(BOOL)supportsActions;
-(void)setServiceViewController:(id)arg1;
-(void)setIndexPathsForSelectedItems:(id)arg1;
-(void)setSortView:(id)arg1;
-(void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
-(void)scrollSortViewToVisible;

@end

