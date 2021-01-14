/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXRelatedSpec : PXFeatureSpec {

	long long _numberOfColumns;
	CGSize _interEntrySpacing;

}

@property (nonatomic,readonly) long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) CGSize interEntrySpacing;               //@synthesize interEntrySpacing=_interEntrySpacing - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(long long)numberOfColumns;
-(id)createViewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(CGSize)interEntrySpacing;
@end

