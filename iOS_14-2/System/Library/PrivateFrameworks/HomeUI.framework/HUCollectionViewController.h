/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/HUResizableCellDelegate.h>

@class NSMapTable, NSString;

@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate> {

	NSMapTable* _installedChildViewControllersKeyedByCell;

}

@property (nonatomic,retain) NSMapTable * installedChildViewControllersKeyedByCell;              //@synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didUpdateRequiredHeightForCell:(id)arg1 ;
-(NSMapTable *)installedChildViewControllersKeyedByCell;
-(void)setInstalledChildViewControllersKeyedByCell:(NSMapTable *)arg1 ;
@end

