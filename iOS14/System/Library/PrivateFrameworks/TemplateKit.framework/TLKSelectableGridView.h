/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol TLKSelectableGridViewDelegate;
@class NSArray, NSMutableArray, NUIContainerGridView, NSString;

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate> {

	long long _selectedIndex;
	NSArray* _tuples;
	id<TLKSelectableGridViewDelegate> _delegate;
	NSMutableArray* _buttons;

}

@property (nonatomic,retain) NUIContainerGridView * contentView; 
@property (nonatomic,retain) NSMutableArray * buttons;                        //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * tuples;                                //@synthesize tuples=_tuples - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (__weak) id<TLKSelectableGridViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxColumns;
+(unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(CGSize)arg2 containerView:(id)arg3 ;
-(id<TLKSelectableGridViewDelegate>)delegate;
-(NSMutableArray *)buttons;
-(NSArray *)tuples;
-(void)selectableGridButtonPressed:(id)arg1 ;
-(id)arrangedEntrySubviews;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setDelegate:(id<TLKSelectableGridViewDelegate>)arg1 ;
-(void)setTuples:(NSArray *)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(long long)selectedIndex;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(id)_createButton;
@end

