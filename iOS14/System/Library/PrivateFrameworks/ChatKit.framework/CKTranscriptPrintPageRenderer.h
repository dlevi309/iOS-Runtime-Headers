/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@class UIScrollView, CKPrintTranscriptCollectionViewController;

@interface CKTranscriptPrintPageRenderer : UIPrintPageRenderer {

	UIScrollView* _scrollView;
	CKPrintTranscriptCollectionViewController* _transcriptCollectionViewController;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) CKPrintTranscriptCollectionViewController * transcriptCollectionViewController;              //@synthesize transcriptCollectionViewController=_transcriptCollectionViewController - In the implementation block
+(void)renderViewWithText:(id)arg1 withOffsetVertical:(double)arg2 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)numberOfPages;
-(UIScrollView *)scrollView;
-(CKPrintTranscriptCollectionViewController *)transcriptCollectionViewController;
-(void)drawScrollViewAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(id)initWithTranscriptCollectionViewController:(id)arg1 ;
-(void)setTranscriptCollectionViewController:(CKPrintTranscriptCollectionViewController *)arg1 ;
@end

