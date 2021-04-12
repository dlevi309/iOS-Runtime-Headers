/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/WFQuickLookRefreshing.h>

@class NSMutableIndexSet, NSTimer;

@interface WFQuickLookController : QLPreviewController <WFQuickLookRefreshing> {

	BOOL _embedded;
	NSMutableIndexSet* _indexesPendingRefresh;
	NSTimer* _indexTimer;
	long long _lastIndex;

}

@property (nonatomic,retain) NSMutableIndexSet * indexesPendingRefresh;              //@synthesize indexesPendingRefresh=_indexesPendingRefresh - In the implementation block
@property (nonatomic,retain) NSTimer * indexTimer;                                   //@synthesize indexTimer=_indexTimer - In the implementation block
@property (assign,nonatomic) long long lastIndex;                                    //@synthesize lastIndex=_lastIndex - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                        //@synthesize embedded=_embedded - In the implementation block
-(long long)lastIndex;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)isEmbedded;
-(id)activityItemForDocumentInteractionController:(id)arg1 ;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)_updateAppearance:(BOOL)arg1 ;
-(void)wf_refreshPreviewItemAtIndex:(long long)arg1 ;
-(void)updateCurrentIndex;
-(NSMutableIndexSet *)indexesPendingRefresh;
-(void)setIndexesPendingRefresh:(NSMutableIndexSet *)arg1 ;
-(NSTimer *)indexTimer;
-(void)setIndexTimer:(NSTimer *)arg1 ;
-(void)setLastIndex:(long long)arg1 ;
@end

