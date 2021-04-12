/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HULinkedApplicationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LSApplicationProxy;

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying> {

	LSApplicationProxy* _applicationProxy;

}

@property (nonatomic,readonly) LSApplicationProxy * applicationProxy;              //@synthesize applicationProxy=_applicationProxy - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bundleIdentifier;
-(id)initWithApplicationProxy:(id)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

