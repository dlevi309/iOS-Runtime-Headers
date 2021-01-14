/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXBarSpec.h>

@class NSDictionary, NSSet;

@interface PXPhotosDetailsBarSpec : PXBarSpec {

	NSDictionary* _sortPriorityByBarItemIdentifierByPlacement;
	NSSet* _includedBarItemIdentifiers;
	BOOL _shouldPlaceEditActionsInToolbar;
	unsigned long long _detailsOptions;

}

@property (assign,nonatomic) unsigned long long detailsOptions;              //@synthesize detailsOptions=_detailsOptions - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(unsigned long long)detailsOptions;
-(id)_sortPriorityForBarItem:(id)arg1 placement:(id)arg2 ;
-(id)_placementForBarItem:(id)arg1 ;
-(BOOL)_shouldIncludeItem:(id)arg1 ;
-(id)sortedBarItemsByPlacement:(id)arg1 ;
-(void)setDetailsOptions:(unsigned long long)arg1 ;
@end

