/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUTriggerListSubheadlineCellDelegate;
@class HFItem, UITextView, HUGridLayoutOptions, NSArray, NSString;

@interface HUTriggerListSubheadlineCell : UITableViewCell <UITextViewDelegate, HUCellProtocol> {

	BOOL _respectLayoutMargins;
	HFItem* _item;
	UITextView* _descriptionView;
	id<HUTriggerListSubheadlineCellDelegate> _delegate;
	HUGridLayoutOptions* _layoutOptions;
	NSArray* _constraints;

}

@property (nonatomic,retain) NSArray * constraints;                                                 //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UITextView * descriptionView;                                          //@synthesize descriptionView=_descriptionView - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerListSubheadlineCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                   //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) BOOL respectLayoutMargins;                                             //@synthesize respectLayoutMargins=_respectLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                         //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(id<HUTriggerListSubheadlineCellDelegate>)delegate;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDelegate:(id<HUTriggerListSubheadlineCellDelegate>)arg1 ;
-(void)updateConstraints;
-(HUGridLayoutOptions *)layoutOptions;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDescriptionView:(UITextView *)arg1 ;
-(UITextView *)descriptionView;
-(void)setRespectLayoutMargins:(BOOL)arg1 ;
-(void)updateUIWithResults:(id)arg1 animation:(BOOL)arg2 ;
-(void)updateUIWithDescription:(id)arg1 ;
-(id)_descriptionTextAttributes;
-(BOOL)respectLayoutMargins;
@end

