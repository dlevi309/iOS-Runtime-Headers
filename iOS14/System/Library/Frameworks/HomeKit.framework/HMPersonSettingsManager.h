/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, _HMContext, HMFMessageDestination, NSString;

@interface HMPersonSettingsManager : NSObject <HMFLogging> {

	NSUUID* _UUID;
	_HMContext* _context;

}

@property (readonly) HMFMessageDestination * messageDestination; 
@property (copy,readonly) NSUUID * UUID;                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) _HMContext * context;                                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)personSettingsManagerUUIDFromHomeUUID:(id)arg1 ;
-(NSUUID *)UUID;
-(id)initWithContext:(id)arg1 UUID:(id)arg2 ;
-(void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)fetchClassificationNotificationsEnabledForPersonWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateClassificationNotificationsEnabled:(BOOL)arg1 forPersonWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)logIdentifier;
-(_HMContext *)context;
-(HMFMessageDestination *)messageDestination;
-(id)initWithHome:(id)arg1 ;
@end

