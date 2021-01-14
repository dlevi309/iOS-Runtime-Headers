/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, SASyncAppIdentifyingInfo;

@interface SAIntentGroupSiriKitAppSelectionState : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * appConfirmationState; 
@property (nonatomic,copy) NSString * appCorrectionState; 
@property (nonatomic,copy) NSArray * eligibleApps; 
@property (nonatomic,retain) SASyncAppIdentifyingInfo * requestedApp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitAppSelectionState;
+(id)siriKitAppSelectionStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)appConfirmationState;
-(void)setAppConfirmationState:(NSString *)arg1 ;
-(NSString *)appCorrectionState;
-(void)setAppCorrectionState:(NSString *)arg1 ;
-(NSArray *)eligibleApps;
-(void)setEligibleApps:(NSArray *)arg1 ;
-(SASyncAppIdentifyingInfo *)requestedApp;
-(void)setRequestedApp:(SASyncAppIdentifyingInfo *)arg1 ;
@end

