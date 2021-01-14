/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2EncodedCharacteristicResponse.h>
#import <libobjc.A.dylib/HAP2EncodedEnableNotificationResponse.h>
@class NSSet;


@protocol HAP2EncodedEnableNotificationResponse <HAP2EncodedCharacteristicResponse>
@property (nonatomic,readonly) NSSet * updatedValues; 
@required
-(NSSet *)updatedValues;

@end


@class NSSet, NSArray, NSString;

@interface HAP2EncodedEnableNotificationResponse : HAP2EncodedCharacteristicResponse <HAP2EncodedEnableNotificationResponse> {

	NSSet* _updatedValues;
	NSSet* _valueResponses;

}

@property (nonatomic,readonly) NSSet * updatedValues;                          //@synthesize updatedValues=_updatedValues - In the implementation block
@property (nonatomic,readonly) NSArray * characteristics; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationResponses:(id)arg1 updatedValues:(id)arg2 ;
-(NSSet *)updatedValues;
-(id)initWithNotificationResponses:(id)arg1 ;
@end

