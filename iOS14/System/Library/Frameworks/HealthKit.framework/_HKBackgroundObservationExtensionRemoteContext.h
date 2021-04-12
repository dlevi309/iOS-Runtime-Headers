/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKBackgroundObservationExtensionContext.h>
#import <libobjc.A.dylib/_HKBackgroundObservationExtensionRemoteXPCInterface.h>

@class HKBackgroundObservationExtension, NSString;

@interface _HKBackgroundObservationExtensionRemoteContext : _HKBackgroundObservationExtensionContext <_HKBackgroundObservationExtensionRemoteXPCInterface> {

	HKBackgroundObservationExtension* _extensionInstance;

}

@property (nonatomic,retain) HKBackgroundObservationExtension * extensionInstance;              //@synthesize extensionInstance=_extensionInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExtensionInstance:(HKBackgroundObservationExtension *)arg1 ;
-(HKBackgroundObservationExtension *)extensionInstance;
-(void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)backgroundObservationExtensionTimeWillExpire;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)performCleanup;
@end

