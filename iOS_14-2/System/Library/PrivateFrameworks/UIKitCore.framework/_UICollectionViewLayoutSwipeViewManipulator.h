/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISwipeViewManipulator.h>

@class UICollectionView, NSString;

@interface _UICollectionViewLayoutSwipeViewManipulator : NSObject <_UISwipeViewManipulator> {

	UICollectionView* _collectionView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 ;
-(void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(SCD_Struct_UI41)arg3 animator:(id)arg4 ;
-(CGRect)restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2 ;
@end

