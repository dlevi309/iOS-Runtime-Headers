/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class HMCharacteristic, NSSet, NSError, NSString;

@interface HFCharacteristicReadResponse : NSObject <NAIdentifiable> {

	HMCharacteristic* _characteristic;
	NSSet* _readTraits;
	id _value;
	NSError* _error;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSSet * readTraits;                             //@synthesize readTraits=_readTraits - In the implementation block
@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSError *)error;
-(id)value;
-(HMCharacteristic *)characteristic;
-(id)valueWithExpectedClass:(Class)arg1 ;
-(id)initWithCharacteristic:(id)arg1 readTraits:(id)arg2 value:(id)arg3 error:(id)arg4 ;
-(id)initWithHomeKitResponse:(id)arg1 value:(id)arg2 readTraits:(id)arg3 ;
-(NSSet *)readTraits;
@end

