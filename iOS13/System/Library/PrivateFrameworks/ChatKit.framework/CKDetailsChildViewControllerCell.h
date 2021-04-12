/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UIView, NSString;

@interface CKDetailsChildViewControllerCell : CKDetailsCell <CKDetailsCell> {

	BOOL _shouldUseLayoutMargins;
	UIView* _childViewControllerView;

}

@property (nonatomic,retain) UIView * childViewControllerView;              //@synthesize childViewControllerView=_childViewControllerView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLayoutMargins;                   //@synthesize shouldUseLayoutMargins=_shouldUseLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShouldUseLayoutMargins:(BOOL)arg1 ;
-(void)setChildViewControllerView:(UIView *)arg1 ;
-(UIView *)childViewControllerView;
-(BOOL)shouldUseLayoutMargins;
@end

