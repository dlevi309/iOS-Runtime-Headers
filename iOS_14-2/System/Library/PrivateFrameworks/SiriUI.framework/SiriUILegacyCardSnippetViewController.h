/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUICardSnippetViewController.h>
#import <SiriUI/SiriUISizeClassConfiguring.h>

@class SAUISnippet, NSString;

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController <SiriUISizeClassConfiguring> {

	SAUISnippet* _snippet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setCancelled:(BOOL)arg1 ;
-(id)subtitle;
-(id)requestContext;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isConfirmed;
-(void)setNavigationTitle:(id)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)sashItem;
-(void)setRequestContext:(id)arg1 ;
-(id)navigationTitle;
-(BOOL)isCancelled;
-(id)initWithSnippet:(id)arg1 ;
-(BOOL)usePlatterStyle;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(void)endEditingAndCorrect:(BOOL)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(void)willCancel;
-(void)willConfirm;
-(Class)transparentHeaderViewClass;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(BOOL)cardViewController:(id)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg2 ;
-(void)configureContentWithSizeClass:(long long)arg1 ;
-(void)siriWillLayoutSnippetView;
-(void)siriDidLayoutSnippetView;
-(id)snippetPunchOut;
-(id)headerPunchOut;
-(void)setWantsConfirmationInsets:(BOOL)arg1 ;
-(BOOL)wantsConfirmationInsets;
-(void)setAttributedSubtitle:(id)arg1 ;
-(id)attributedSubtitle;
-(BOOL)wantsToManageBackgroundColor;
-(void)setHeaderPunchOut:(id)arg1 ;
-(void)setSnippetPunchOut:(id)arg1 ;
-(BOOL)isFullPadWidth;
-(void)setIsFullPadWidth:(BOOL)arg1 ;
-(id)_legacyCardSectionViewController;
-(id)_backingSnippetViewController;
@end

