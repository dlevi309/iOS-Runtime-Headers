/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HULinkedApplicationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HULinkedApplicationInternalStoreItem : HULinkedApplicationItem <NSCopying> {

	NSString* _bundleIdentifier;

}
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)bundleIdentifier;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 associatedAccessories:(id)arg2 ;
@end

