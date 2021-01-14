/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HULinkedApplicationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AMSLookupItem;

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying> {

	AMSLookupItem* _storeItem;

}

@property (nonatomic,readonly) AMSLookupItem * storeItem;              //@synthesize storeItem=_storeItem - In the implementation block
-(id)init;
-(id)bundleIdentifier;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(AMSLookupItem *)storeItem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStoreItem:(id)arg1 ;
-(id)initWithStoreItem:(id)arg1 associatedAccessories:(id)arg2 ;
-(id)_loadStoreIconWithArtwork:(id)arg1 ;
-(id)_imageForSize:(CGSize)arg1 fromArtwork:(id)arg2 ;
@end

