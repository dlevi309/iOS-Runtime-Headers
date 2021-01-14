/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class AFSettingsConnection, NSString;

@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging> {

	AFSettingsConnection* _settingsConnection;

}

@property (readonly) AFSettingsConnection * settingsConnection;              //@synthesize settingsConnection=_settingsConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithSettingsConnection:(id)arg1 ;
-(void)main;
-(AFSettingsConnection *)settingsConnection;
@end

