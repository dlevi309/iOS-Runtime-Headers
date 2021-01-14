/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
*/

#import <PDS/PDSXPCInterfaceVendor.h>
#import <PDS/PDSXPCConnectionVendor.h>

@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstance;
+(id)defaultInterfaceVendor;
+(id)defaultConnectionVendor;
+(BOOL)disableXPC;
+(void)setDisableXPC:(BOOL)arg1 ;
-(id)interfaceWithProtocol:(id)arg1 ;
-(id)_init;
-(id)connectionForMachService:(id)arg1 ;
@end

