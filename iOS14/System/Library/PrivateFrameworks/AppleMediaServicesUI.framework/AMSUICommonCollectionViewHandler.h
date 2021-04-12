/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol AMSUICommonCollectionViewDelegate;
@class AMSUICommonCollectionView, NSString;

@interface AMSUICommonCollectionViewHandler : NSObject <UICollectionViewDelegate> {

	AMSUICommonCollectionView* _collectionView;
	id<AMSUICommonCollectionViewDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) AMSUICommonCollectionView * collectionView;                //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUICommonCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)initWithCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id<AMSUICommonCollectionViewDelegate>)delegate;
-(AMSUICommonCollectionView *)collectionView;
-(void)setDelegate:(id<AMSUICommonCollectionViewDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
@end

