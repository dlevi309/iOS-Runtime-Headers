/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying> {

	NSString* _bundleID;
	NSString* _storeID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;               //@synthesize storeID=_storeID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(NSString *)storeID;
-(id)initWithBundleID:(id)arg1 storeID:(id)arg2 ;
@end

