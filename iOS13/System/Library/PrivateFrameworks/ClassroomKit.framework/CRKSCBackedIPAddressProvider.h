/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@class NSString, NSSet;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding> {

	NSSet* mInterfaceTypes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * IPAddress; 
+(id)ethernetIPAddressProvider;
+(id)WiFiIPAddressProvider;
-(id)init;
-(id)initWithInterfaceType:(id)arg1 ;
-(id)initWithInterfaceTypes:(id)arg1 ;
-(NSString *)IPAddress;
-(BOOL)isAllowedInterfaceType:(id)arg1 ;
@end

