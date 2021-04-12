/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HULinkedApplicationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSLookupItem;

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying> {

	SSLookupItem* _storeItem;

}

@property (nonatomic,readonly) SSLookupItem * storeItem;              //@synthesize storeItem=_storeItem - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bundleIdentifier;
-(SSLookupItem *)storeItem;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithStoreItem:(id)arg1 ;
-(id)_loadStoreIconWithArtwork:(id)arg1 ;
-(id)_imageForSize:(CGSize)arg1 fromArtwork:(id)arg2 ;
@end

