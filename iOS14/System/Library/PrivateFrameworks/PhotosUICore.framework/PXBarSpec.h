/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying> {

	PXExtendedTraitCollection* _extendedTraitCollection;

}

@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(id)init;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(id)sortedBarItemsByPlacement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

