/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UISegmentedControl.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSMutableArray, NSString;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView> {

	CGRect _deferredFrame;
	double _deferredMaxTotalWidth;
	double _deferredMinSegmentWidth;
	NSMutableArray* _deferredSegments;
	long long _deferredSegmentedControlStyle;
	unsigned long long _deferredSelectedSegmentIndex;
	BOOL _deferredSizeToFit;
	BOOL _isDeferringInterfaceUpdates;

}

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSegments;
-(CGRect)frame;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(void)removeAllSegments;
-(void)sizeToFit;
-(void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(long long)segmentedControlStyle;
-(long long)selectedSegmentIndex;
-(void)setSegmentedControlStyle:(long long)arg1 ;
-(id)titleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)imageForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
-(void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_saveSegmentsAsDeferred;
@end

