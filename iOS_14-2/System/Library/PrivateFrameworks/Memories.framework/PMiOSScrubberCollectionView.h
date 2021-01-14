/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UICollectionView.h>

@protocol PMiOSScrubberCollectionViewDelegate;
@interface PMiOSScrubberCollectionView : UICollectionView {

	id<PMiOSScrubberCollectionViewDelegate> _collectionViewDelegate;

}

@property (assign,nonatomic,__weak) id<PMiOSScrubberCollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<PMiOSScrubberCollectionViewDelegate>)collectionViewDelegate;
-(void)setCollectionViewDelegate:(id<PMiOSScrubberCollectionViewDelegate>)arg1 ;
@end

