/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedCtrl : UIControl {

	unsigned long long _selectionType;
	unsigned long long _selectedSegment;
	NSArray* _images;
	NSArray* _buttons;
	NSMutableOrderedSet* _selectionStack;

}

@property (nonatomic,retain) NSArray * images;                                  //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                 //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSegment;                //@synthesize selectedSegment=_selectedSegment - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * selectionStack;              //@synthesize selectionStack=_selectionStack - In the implementation block
@property (assign,nonatomic) unsigned long long selectionType;                  //@synthesize selectionType=_selectionType - In the implementation block
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectedSegment:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(BOOL)isEnabledForSegment:(unsigned long long)arg1 ;
-(unsigned long long)selectedSegment;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(unsigned long long)segmentCount;
-(void)_buttonTapped:(id)arg1 ;
-(void)setSelectionType:(unsigned long long)arg1 ;
-(unsigned long long)selectionType;
-(id)initWithImages:(id)arg1 ;
-(long long)tagForSegment:(unsigned long long)arg1 ;
-(void)_configureForNewImages;
-(void)_setSelected:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(id)segmentAtIndex:(unsigned long long)arg1 ;
-(id)segmentForTag:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(BOOL)isSelectedForSegment:(unsigned long long)arg1 ;
-(void)selectSegmentWithTag:(long long)arg1 ;
-(void)deselectAllSegments;
-(void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2 ;
-(NSMutableOrderedSet *)selectionStack;
-(void)setSelectionStack:(NSMutableOrderedSet *)arg1 ;
@end

