/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <CardKit/CRKCardSectionViewController.h>

@class SiriUISnippetViewController, SiriUICardSectionView;

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {

	SiriUISnippetViewController* _snippetViewController;

}

@property (nonatomic,retain) SiriUICardSectionView * view; 
+(id)cardSectionClasses;
-(void)viewDidLayoutSubviews;
-(void)_updateContentSize;
-(void)_loadCardSectionView;
-(BOOL)_shouldRenderButtonOverlay;
@end

