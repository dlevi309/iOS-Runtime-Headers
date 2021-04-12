/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, CEMPredicateCompositeBudget_Monitors, NSArray;

@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCalendarIdentifier;
	CEMPredicateCompositeBudget_Monitors* _payloadMonitors;
	NSArray* _payloadNotificationTimes;
	NSArray* _payloadTimeBudget;

}

@property (nonatomic,copy) NSString * payloadCalendarIdentifier;                                //@synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier - In the implementation block
@property (nonatomic,copy) CEMPredicateCompositeBudget_Monitors * payloadMonitors;              //@synthesize payloadMonitors=_payloadMonitors - In the implementation block
@property (nonatomic,copy) NSArray * payloadNotificationTimes;                                  //@synthesize payloadNotificationTimes=_payloadNotificationTimes - In the implementation block
@property (nonatomic,copy) NSArray * payloadTimeBudget;                                         //@synthesize payloadTimeBudget=_payloadTimeBudget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildWithCalendarIdentifier:(id)arg1 withMonitors:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithMonitors:(id)arg1 withTimeBudget:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadCalendarIdentifier:(NSString *)arg1 ;
-(void)setPayloadNotificationTimes:(NSArray *)arg1 ;
-(void)setPayloadTimeBudget:(NSArray *)arg1 ;
-(NSString *)payloadCalendarIdentifier;
-(NSArray *)payloadNotificationTimes;
-(NSArray *)payloadTimeBudget;
-(void)setPayloadMonitors:(CEMPredicateCompositeBudget_Monitors *)arg1 ;
-(CEMPredicateCompositeBudget_Monitors *)payloadMonitors;
@end

