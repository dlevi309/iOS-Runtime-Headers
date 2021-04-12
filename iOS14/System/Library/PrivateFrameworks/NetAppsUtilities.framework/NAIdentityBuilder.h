/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NAIdentity;

@interface NAIdentityBuilder : NSObject <NSCopying> {

	NSMutableArray* _characteristics;
	NAIdentity* _builtIdentity;

}

@property (nonatomic,retain) NSMutableArray * characteristics;              //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,retain) NAIdentity * builtIdentity;                    //@synthesize builtIdentity=_builtIdentity - In the implementation block
+(id)buildPointerIdentity;
+(id)builderWithIdentity:(id)arg1 ;
+(id)na_identity;
+(id)builder;
-(id)appendCGRectCharacteristic:(/*^block*/id)arg1 ;
-(id)appendCGFloatCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendCGPointCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendCGRectCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendCGFloatCharacteristic:(/*^block*/id)arg1 ;
-(id)appendCGPointCharacteristic:(/*^block*/id)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(id)build;
-(id)init;
-(id)appendDoubleCharacteristic:(/*^block*/id)arg1 ;
-(id)appendCharacteristic:(/*^block*/id)arg1 ;
-(BOOL)isObject:(id)arg1 equalToObject:(id)arg2 ;
-(unsigned long long)hashOfObject:(id)arg1 ;
-(id)appendUnsignedIntegerCharacteristic:(/*^block*/id)arg1 ;
-(id)appendCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendIntegerCharacteristic:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)characteristics;
-(void)setCharacteristics:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBuiltIdentity:(NAIdentity *)arg1 ;
-(NAIdentity *)builtIdentity;
-(id)appendCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 comparatorBlock:(/*^block*/id)arg3 hashBlock:(/*^block*/id)arg4 ;
-(id)appendIntegerCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendUnsignedIntegerCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendFloatCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendDoubleCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendRangeCharacteristic:(/*^block*/id)arg1 withRole:(long long)arg2 ;
-(id)appendFloatCharacteristic:(/*^block*/id)arg1 ;
-(id)appendRangeCharacteristic:(/*^block*/id)arg1 ;
@end

