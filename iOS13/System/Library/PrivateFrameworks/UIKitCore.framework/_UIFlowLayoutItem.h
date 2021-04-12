/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIFlowLayoutSection, _UIFlowLayoutRow;

@interface _UIFlowLayoutItem : NSObject {

	struct {
		unsigned sizeEstimated : 1;
		unsigned positionEstimated : 1;
		unsigned sizeHasBeenSet : 1;
	}  _itemFlags;
	_UIFlowLayoutSection* _section;
	_UIFlowLayoutRow* _rowObject;
	CGRect _itemFrame;

}

@property (assign,nonatomic,__weak) _UIFlowLayoutSection * section;                          //@synthesize section=_section - In the implementation block
@property (assign,nonatomic,__weak) _UIFlowLayoutRow * rowObject;                            //@synthesize rowObject=_rowObject - In the implementation block
@property (assign,nonatomic) CGRect itemFrame;                                               //@synthesize itemFrame=_itemFrame - In the implementation block
@property (assign,getter=isSizeEstimated,nonatomic) BOOL sizeEstimated; 
@property (assign,nonatomic) BOOL sizeHasBeenSet; 
@property (assign,getter=isPositionEstimated,nonatomic) BOOL positionEstimated; 
-(id)copy;
-(_UIFlowLayoutSection *)section;
-(CGRect)itemFrame;
-(void)setItemFrame:(CGRect)arg1 ;
-(void)setSizeHasBeenSet:(BOOL)arg1 ;
-(void)setSizeEstimated:(BOOL)arg1 ;
-(_UIFlowLayoutRow *)rowObject;
-(BOOL)isSizeEstimated;
-(BOOL)isPositionEstimated;
-(void)setPositionEstimated:(BOOL)arg1 ;
-(BOOL)sizeHasBeenSet;
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(void)setRowObject:(_UIFlowLayoutRow *)arg1 ;
@end

