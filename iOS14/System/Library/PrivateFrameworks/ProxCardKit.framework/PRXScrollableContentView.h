/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <ProxCardKit/PRXCardContentView.h>

@class UIScrollView, NSLayoutConstraint;

@interface PRXScrollableContentView : PRXCardContentView {

	UIScrollView* _scrollView;
	NSLayoutConstraint* _scrollViewHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * scrollViewHeightConstraint;              //@synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)intrinsicContentSize;
-(UIScrollView *)scrollView;
-(void)dealloc;
-(id)initWithCardStyle:(long long)arg1 ;
-(id)initWithCardStyle:(long long)arg1 scrollView:(id)arg2 ;
-(NSLayoutConstraint *)scrollViewHeightConstraint;
-(void)setScrollViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

