/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


#import <AVKit/AVKit-Structs.h>
@class NSString, NSArray, NSMutableArray;

@interface AVCustomStackLayout : NSObject {

	NSString* _debugIdentifier;
	NSArray* _rowHeads;
	NSMutableArray* _rowSpacing;

}

@property (nonatomic,retain) NSArray * rowHeads;                       //@synthesize rowHeads=_rowHeads - In the implementation block
@property (nonatomic,retain) NSMutableArray * rowSpacing;              //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                 //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
-(id)init;
-(NSString *)debugIdentifier;
-(id)layoutFramesInBoundingSize:(CGSize)arg1 ;
-(id)itemsThatFitSize:(CGSize)arg1 ;
-(NSMutableArray *)rowSpacing;
-(void)setRowSpacing:(NSMutableArray *)arg1 ;
-(id)initWithLayoutRowHeads:(id)arg1 ;
-(id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:(id)arg1 endingWithItem:(id)arg2 withAvailableSize:(CGSize)arg3 ;
-(NSArray *)rowHeads;
-(id)prioritizedSizeThatFitsSize:(CGSize)arg1 ;
-(id)_lastVisibleLayoutItemAttributesFrom:(id)arg1 ;
-(void)setRowHeads:(NSArray *)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)arg1 ;
-(void)setRowSpacing:(double)arg1 afterRow:(unsigned long long)arg2 ;
-(double)_heightForRow:(unsigned long long)arg1 startingFrom:(id)arg2 inBoundingSize:(CGSize)arg3 ;
@end

