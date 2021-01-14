/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUILeadingViewController.h>

@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (nonatomic,retain) SearchUIImageView * view; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(BOOL)rowModelHasSuggestionThumbnail:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)applyImageConstraints;
-(id)setupView;
-(unsigned long long)type;
-(void)forceVerticalCenteringOfContents;
-(BOOL)shouldVerticallyCenter;
-(void)setUsesCompactWidth:(BOOL)arg1 ;
@end

