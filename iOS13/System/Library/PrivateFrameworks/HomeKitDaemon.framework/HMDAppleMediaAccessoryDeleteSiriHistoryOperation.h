/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(id)initWithSettingsConnection:(id)arg1 ;
-(AFSettingsConnection *)settingsConnection;
@end

