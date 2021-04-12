/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedCache;
-(id)init;
-(id)identifiersOfTypeNotDispatched:(long long)arg1 ;
-(BOOL)deviceUnlockedSinceBoot;
-(void)save;
-(id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2 ;
-(id)generateSomePerUserEntropyNotDispatched;
-(id)allIdentifiersNotDispatched;
-(void)generatePerUserEntropyIfNeededNotDispatched;
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

