/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMAccessory;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying> {

	NSString* _bundleID;
	NSString* _storeID;
	HMAccessory* _accessory;

}

@property (nonatomic,readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
-(NSString *)storeID;
-(HMAccessory *)accessory;
-(NSString *)bundleID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 storeID:(id)arg2 ;
@end

