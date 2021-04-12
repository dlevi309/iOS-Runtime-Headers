/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewReorderedItem : NSObject {

	UICollectionViewCell* _cell;
	NSIndexPath* _originalIndexPath;
	NSIndexPath* _targetIndexPath;
	BOOL _pinned;
	/*^block*/id _pinningTest;
	CGPoint _pinnedPreviousContentOffset;

}

@property (nonatomic,readonly) UICollectionViewCell * cell;                    //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalIndexPath;                  //@synthesize originalIndexPath=_originalIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                    //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                      //@synthesize pinned=_pinned - In the implementation block
@property (assign,nonatomic) CGPoint pinnedPreviousContentOffset;              //@synthesize pinnedPreviousContentOffset=_pinnedPreviousContentOffset - In the implementation block
@property (nonatomic,copy) id pinningTest;                                     //@synthesize pinningTest=_pinningTest - In the implementation block
-(UICollectionViewCell *)cell;
-(BOOL)pinned;
-(NSIndexPath *)targetIndexPath;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)isNOOP;
-(id)description;
-(id)pinningTest;
-(id)initWithCell:(id)arg1 indexPath:(id)arg2 ;
-(void)setOriginalIndexPath:(NSIndexPath *)arg1 ;
-(void)setPinningTest:(id)arg1 ;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)originalIndexPath;
-(void)setPinnedPreviousContentOffset:(CGPoint)arg1 ;
-(CGPoint)pinnedPreviousContentOffset;
@end

