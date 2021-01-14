/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKit/UICollectionViewDataSource.h>

@protocol UICollectionViewDataSource;
@class NSString;

@interface PUCollectionViewIntermediateDataSource : NSObject <UICollectionViewDataSource> {

	id<UICollectionViewDataSource> _realDataSource;

}

@property (assign,nonatomic) id<UICollectionViewDataSource> realDataSource;              //@synthesize realDataSource=_realDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<UICollectionViewDataSource>)realDataSource;
-(void)setRealDataSource:(id<UICollectionViewDataSource>)arg1 ;
@end

