/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface OBBulletedList : UIView {

	NSMutableArray* _items;
	NSMutableArray* _verticalConstraints;

}

@property (nonatomic,retain) NSMutableArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * verticalConstraints;              //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(NSMutableArray *)verticalConstraints;
-(void)setVerticalConstraints:(NSMutableArray *)arg1 ;
-(void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(void)addItemWithDescription:(id)arg1 image:(id)arg2 ;
-(void)addBulletedListItem:(id)arg1 ;
-(double)bulletedListItemSpacing;
@end

