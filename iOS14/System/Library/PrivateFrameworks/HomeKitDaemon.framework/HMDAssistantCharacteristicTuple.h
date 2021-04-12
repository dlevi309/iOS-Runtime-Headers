/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString, SAHAAttributeValue;

@interface HMDAssistantCharacteristicTuple : NSObject {

	NSString* _attribute;
	SAHAAttributeValue* _value;

}

@property (nonatomic,readonly) NSString * attribute;                    //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,readonly) SAHAAttributeValue * value;              //@synthesize value=_value - In the implementation block
-(id)init;
-(NSString *)attribute;
-(SAHAAttributeValue *)value;
-(id)initWithAttribute:(id)arg1 value:(id)arg2 ;
@end

