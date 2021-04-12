/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PUImportOneUpViewControllerSpec : PXFeatureSpec {

	BOOL _allowsInterfaceRotation;
	double _interItemSpacing;
	unsigned long long _selectionBadgeCorner;
	unsigned long long _style;
	CGSize _selectionBadgeSize;
	UIOffset _selectionBadgeOffset;

}

@property (nonatomic,readonly) double interItemSpacing;                              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) CGSize selectionBadgeSize;                            //@synthesize selectionBadgeSize=_selectionBadgeSize - In the implementation block
@property (nonatomic,readonly) UIOffset selectionBadgeOffset;                        //@synthesize selectionBadgeOffset=_selectionBadgeOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long selectionBadgeCorner;              //@synthesize selectionBadgeCorner=_selectionBadgeCorner - In the implementation block
@property (nonatomic,readonly) BOOL allowsInterfaceRotation;                         //@synthesize allowsInterfaceRotation=_allowsInterfaceRotation - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                             //@synthesize style=_style - In the implementation block
-(double)interItemSpacing;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)selectionBadgeCorner;
-(UIOffset)selectionBadgeOffset;
-(CGSize)selectionBadgeSize;
-(BOOL)allowsInterfaceRotation;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)style;
@end

