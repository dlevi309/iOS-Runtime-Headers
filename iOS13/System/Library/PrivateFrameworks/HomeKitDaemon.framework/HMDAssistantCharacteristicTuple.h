/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

