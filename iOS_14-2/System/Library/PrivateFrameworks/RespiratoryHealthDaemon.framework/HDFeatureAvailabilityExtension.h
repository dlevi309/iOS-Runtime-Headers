/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/

@class NSString;


@protocol HDFeatureAvailabilityExtension <HKFeatureAvailabilityProviding>
@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
@required
-(id)deviceForPairingID:(id)arg1;
-(void)unregisterObserver:(id)arg1;
-(void)registerObserver:(id)arg1 queue:(id)arg2;
-(NSString *)featureIdentifier;

@end

