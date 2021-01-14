/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIFlowLayoutSection, NSMutableArray;

@interface _UIFlowLayoutRow : NSObject {

	BOOL _isValid;
	BOOL _complete;
	int _verticalAlignement;
	int _horizontalAlignement;
	BOOL _fixedItemSize;
	_UIFlowLayoutSection* _section;
	long long _index;
	NSMutableArray* _items;
	double _availableSpace;
	CGSize _rowSize;
	CGRect _rowFrame;

}

@property (assign,nonatomic,__weak) _UIFlowLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                     //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                                    //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) long long index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL complete;                                      //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize;                                 //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) double availableSpace;                              //@synthesize availableSpace=_availableSpace - In the implementation block
-(id)snapshot;
-(long long)index;
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(void)setFixedItemSize:(BOOL)arg1 ;
-(CGSize)rowSize;
-(id)init;
-(void)insertItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)setIndex:(long long)arg1 ;
-(_UIFlowLayoutSection *)section;
-(void)addItem:(id)arg1 atEnd:(BOOL)arg2 ;
-(CGRect)rowFrame;
-(void)removeItemAtIndex:(long long)arg1 ;
-(BOOL)fixedItemSize;
-(void)setRowFrame:(CGRect)arg1 ;
-(NSMutableArray *)items;
-(void)setRowSize:(CGSize)arg1 ;
-(void)setAvailableSpace:(double)arg1 ;
-(BOOL)complete;
-(id)copyFromSection:(id)arg1 ;
-(void)layoutRow;
-(void)invalidate;
-(void)setComplete:(BOOL)arg1 ;
-(long long)indexOfNearestItemAtPoint:(CGPoint)arg1 ;
-(double)availableSpace;
@end

