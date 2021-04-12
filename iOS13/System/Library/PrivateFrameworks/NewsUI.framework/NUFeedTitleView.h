/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUTitleViewDelegate.h>

@protocol NUFeedTitleViewDelegate;
@class NUTitleView, NUTitleViewUpdate, NSMutableArray, NSString;

@interface NUFeedTitleView : UIView <NUTitleViewDelegate> {

	id<NUFeedTitleViewDelegate> _delegate;
	NUTitleView* _titleView;
	NUTitleViewUpdate* _lastQueuedTitleViewUpdate;
	NSMutableArray* _titleViewUpdateStack;

}

@property (nonatomic,readonly) NUTitleView * titleView;                                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUTitleViewUpdate * lastQueuedTitleViewUpdate;              //@synthesize lastQueuedTitleViewUpdate=_lastQueuedTitleViewUpdate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * titleViewUpdateStack;                    //@synthesize titleViewUpdateStack=_titleViewUpdateStack - In the implementation block
@property (nonatomic,retain) id<NUTitleViewStyler> styler; 
@property (assign,nonatomic,__weak) id<NUFeedTitleViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUFeedTitleViewDelegate>)delegate;
-(void)setDelegate:(id<NUFeedTitleViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUTitleView *)titleView;
-(void)applyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 force:(BOOL)arg3 ;
-(id)titleViewUpdateForFeedTitleViewUpdate:(id)arg1 force:(BOOL)arg2 ;
-(void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)pushApplyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 force:(BOOL)arg3 ;
-(NUTitleViewUpdate *)lastQueuedTitleViewUpdate;
-(NSMutableArray *)titleViewUpdateStack;
-(void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)setStyler:(id<NUTitleViewStyler>)arg1 ;
-(id<NUTitleViewStyler>)styler;
-(void)relayoutWithAnimation:(BOOL)arg1 ;
-(void)setLastQueuedTitleViewUpdate:(NUTitleViewUpdate *)arg1 ;
-(unsigned long long)titleViewAnimationForAnimation:(unsigned long long)arg1 ;
-(BOOL)useCompactTitleViewUpdates;
-(void)titleViewDidTapOnTitleView:(id)arg1 ;
-(void)applyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)pushApplyFeedTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)popApplyFeedTitleViewUpdateWithAnimation:(unsigned long long)arg1 ;
@end

