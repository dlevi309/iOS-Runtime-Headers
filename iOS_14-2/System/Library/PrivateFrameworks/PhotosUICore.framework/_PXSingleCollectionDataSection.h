/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCollectionsDataSection.h>

@protocol PXDisplayCollection;
@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {

	long long _count;
	id<PXDisplayCollection> _displayCollection;

}

@property (nonatomic,readonly) id<PXDisplayCollection> displayCollection;              //@synthesize displayCollection=_displayCollection - In the implementation block
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)initWithDisplayCollection:(id)arg1 ;
-(id<PXDisplayCollection>)displayCollection;
-(long long)indexOfCollection:(id)arg1 ;
@end

