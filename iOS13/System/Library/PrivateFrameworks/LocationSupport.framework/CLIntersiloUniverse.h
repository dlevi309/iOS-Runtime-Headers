/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/CLIntersiloUniverse.h>

@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLSilo * silo;                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;              //@synthesize vendor=_vendor - In the implementation block
+(id)newIsolatedUniverseWithOnlySilo:(id)arg1 ;
+(id)newSharedVendorUniverseWithSilo:(id)arg1 ;
-(CLSilo *)silo;
-(CLServiceVendor *)vendor;
-(id)initWithSilo:(id)arg1 vendor:(id)arg2 ;
@end

