/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UICollectionView.h>

@protocol PMiOSScrubberCollectionViewDelegate;
@interface PMiOSScrubberCollectionView : UICollectionView {

	id<PMiOSScrubberCollectionViewDelegate> _collectionViewDelegate;

}

@property (assign,nonatomic,__weak) id<PMiOSScrubberCollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)awakeFromNib;
-(id<PMiOSScrubberCollectionViewDelegate>)collectionViewDelegate;
-(void)setCollectionViewDelegate:(id<PMiOSScrubberCollectionViewDelegate>)arg1 ;
@end

