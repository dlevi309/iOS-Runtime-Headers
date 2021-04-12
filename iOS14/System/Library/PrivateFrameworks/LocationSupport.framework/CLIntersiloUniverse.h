/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/CLIntersiloUniverse.h>

@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;

}

@property (nonatomic,readonly) CLSilo * silo;                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;              //@synthesize vendor=_vendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSharedVendorUniverseWithSilo:(id)arg1 ;
+(id)newIsolatedUniverseWithOnlySilo:(id)arg1 ;
-(CLServiceVendor *)vendor;
-(id)initWithSilo:(id)arg1 vendor:(id)arg2 ;
-(CLSilo *)silo;
@end

