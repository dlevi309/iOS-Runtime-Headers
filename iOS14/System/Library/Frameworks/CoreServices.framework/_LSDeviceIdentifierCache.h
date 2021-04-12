/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSUUID, NSObject;

@interface _LSDeviceIdentifierCache : NSObject {

	NSDictionary* _identifiers;
	NSUUID* _advertiserIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	int _saveFlag;
	NSDictionary* _perUserEntropy;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue; 
+(id)sharedCache;
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(id)init;
-(void)save;
-(id)allIdentifiersNotDispatched;
-(id)identifiersOfTypeNotDispatched:(long long)arg1 ;
-(void)generatePerUserEntropyIfNeededNotDispatched;
-(id)generateSomePerUserEntropyNotDispatched;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)deviceUnlockedSinceBoot;
@end

