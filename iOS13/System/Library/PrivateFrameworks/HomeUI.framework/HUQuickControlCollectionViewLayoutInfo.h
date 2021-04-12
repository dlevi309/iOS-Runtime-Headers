/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class NSMutableArray;

@interface HUQuickControlCollectionViewLayoutInfo : NSObject {

	NSMutableArray* _layoutDetailsArray;
	CGSize _collectionViewContentSize;
	CGRect _availableContentFrame;

}

@property (assign,nonatomic) CGRect availableContentFrame;                     //@synthesize availableContentFrame=_availableContentFrame - In the implementation block
@property (assign,nonatomic) CGSize collectionViewContentSize;                 //@synthesize collectionViewContentSize=_collectionViewContentSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutDetailsArray;              //@synthesize layoutDetailsArray=_layoutDetailsArray - In the implementation block
-(CGSize)collectionViewContentSize;
-(NSMutableArray *)layoutDetailsArray;
-(void)setAvailableContentFrame:(CGRect)arg1 ;
-(void)setLayoutDetailsArray:(NSMutableArray *)arg1 ;
-(CGRect)availableContentFrame;
-(void)setCollectionViewContentSize:(CGSize)arg1 ;
@end

