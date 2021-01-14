/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/MiroEditorFlowLayoutDelegate.h>
#import <libobjc.A.dylib/MiroEditorClipCollection.h>

@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;
@class NSIndexPath, NSString;

@interface MiroEditorClipCollectionViewController : UICollectionViewController <MiroEditorFlowLayoutDelegate, MiroEditorClipCollection> {

	BOOL _isInViewWillTransitionToSize;
	id<MiroEditorClipCollectionDataSource> _dataSource;
	id<MiroEditorClipCollectionDelegate> _delegate;
	NSIndexPath* _initialIndexPath;

}

@property (assign,nonatomic) BOOL isInViewWillTransitionToSize;                                     //@synthesize isInViewWillTransitionToSize=_isInViewWillTransitionToSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * initialIndexPath;                                        //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id<MiroEditorClipCollectionDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<MiroEditorClipCollectionDataSource>)dataSource;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setDelegate:(id<MiroEditorClipCollectionDelegate>)arg1 ;
-(void)setDataSource:(id<MiroEditorClipCollectionDataSource>)arg1 ;
-(void)viewDidLoad;
-(NSIndexPath *)initialIndexPath;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3 ;
-(void)setInitialIndexPath:(NSIndexPath *)arg1 ;
-(void)snapToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)cellForClipProvider:(id)arg1 ;
-(BOOL)isInViewWillTransitionToSize;
-(void)_snapToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsInViewWillTransitionToSize:(BOOL)arg1 ;
@end

