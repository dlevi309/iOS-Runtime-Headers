/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUICardSnippetViewController.h>

@class SAUISnippet;

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController {

	SAUISnippet* _snippet;

}
+(void)initialize;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isCancelled;
-(id)subtitle;
-(void)setSubtitle:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(id)requestContext;
-(void)setRequestContext:(id)arg1 ;
-(id)navigationTitle;
-(BOOL)isConfirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(id)attributedSubtitle;
-(void)setAttributedSubtitle:(id)arg1 ;
-(void)setNavigationTitle:(id)arg1 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(BOOL)cardViewController:(id)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg2 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(id)initWithSnippet:(id)arg1 ;
-(BOOL)usePlatterStyle;
-(void)wasAddedToTranscript;
-(void)endEditingAndCorrect:(BOOL)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(id)sashItem;
-(Class)transparentHeaderViewClass;
-(void)siriWillLayoutSnippetView;
-(void)siriDidLayoutSnippetView;
-(id)snippetPunchOut;
-(id)headerPunchOut;
-(void)setWantsConfirmationInsets:(BOOL)arg1 ;
-(BOOL)wantsConfirmationInsets;
-(BOOL)wantsToManageBackgroundColor;
-(void)setHeaderPunchOut:(id)arg1 ;
-(void)setSnippetPunchOut:(id)arg1 ;
-(BOOL)isFullPadWidth;
-(void)setIsFullPadWidth:(BOOL)arg1 ;
-(id)_legacyCardSectionViewController;
-(id)_backingSnippetViewController;
@end

