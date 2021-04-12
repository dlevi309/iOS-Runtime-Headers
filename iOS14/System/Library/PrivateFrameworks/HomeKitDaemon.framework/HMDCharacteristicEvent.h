/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding> {

	id _eventValue;

}

@property (nonatomic,retain) id eventValue;              //@synthesize eventValue=_eventValue - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(id)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEventValue:(id)arg1 ;
-(id)eventValue;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)analyticsTriggerEventData;
-(BOOL)_compareEventValue:(id)arg1 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
@end

