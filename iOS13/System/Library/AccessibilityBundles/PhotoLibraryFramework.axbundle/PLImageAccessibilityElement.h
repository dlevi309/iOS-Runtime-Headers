/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface PLImageAccessibilityElement : UIAccessibilityElement {

	int _index;

}

@property (assign,nonatomic) int index;              //@synthesize index=_index - In the implementation block
-(id)delegate;
-(int)index;
-(id)dataSource;
-(void)setIndex:(int)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityURL;
-(id)_accessibilityPhotoDescription;
-(id)_accessibilityElementStoredUserLabel;
-(id)_axMainAssetURL;
-(long long)_albumPhotoIndex;
-(id)albumView;
@end

