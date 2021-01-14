/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2Accessory;
@class NSMutableArray;

@interface HAP2CharacteristicTuple : NSObject {

	id<HAP2Accessory> _accessory;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) id<HAP2Accessory> accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
-(NSMutableArray *)values;
-(id<HAP2Accessory>)accessory;
-(id)initWithAccessory:(id)arg1 ;
@end

