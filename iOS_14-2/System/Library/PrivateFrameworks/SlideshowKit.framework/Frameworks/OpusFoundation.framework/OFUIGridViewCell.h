/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, OFUIGridViewItem, NSMutableArray, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface OFUIGridViewCell : UIView <UIGestureRecognizerDelegate> {

	NSString* _reuseIdentifier;
	long long _index;
	OFUIGridViewItem* _item;
	NSMutableArray* _operations;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UITapGestureRecognizer* _selectAllRecognizer;
	BOOL _continuousSelection;
	BOOL _selected;

}

@property (nonatomic,copy,readonly) NSString * reuseIdentifier;                                  //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) long long index;                                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * operations;                               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) OFUIGridViewItem * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain,readonly) UITapGestureRecognizer * singleTapRecognizer;              //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (nonatomic,retain,readonly) UITapGestureRecognizer * selectAllRecognizer;              //@synthesize selectAllRecognizer=_selectAllRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)gridView;
-(long long)index;
-(void)cancelAllOperations;
-(NSMutableArray *)operations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addOperation:(id)arg1 ;
-(BOOL)hasOperations;
-(void)setIndex:(long long)arg1 ;
-(OFUIGridViewItem *)item;
-(id)selectionColor;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setItem:(OFUIGridViewItem *)arg1 ;
-(void)commonInit;
-(void)setFrame:(CGRect)arg1 ;
-(void)handleTap:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)removeOperation:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setOperationsPriority:(long long)arg1 ;
-(void)startDragging:(id)arg1 ;
-(void)handleSelectAll:(id)arg1 ;
-(void)_setHighlightedOnCell:(BOOL)arg1 ;
-(void)showSelectionBorder:(BOOL)arg1 ;
-(id)newDraggingItem;
-(unsigned long long)countOperations;
-(void)enumerateOperations:(/*^block*/id)arg1 ;
-(UITapGestureRecognizer *)singleTapRecognizer;
-(UITapGestureRecognizer *)selectAllRecognizer;
@end

