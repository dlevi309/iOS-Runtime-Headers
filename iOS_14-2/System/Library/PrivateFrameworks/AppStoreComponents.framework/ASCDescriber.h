/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@protocol NSObject;
@class NSMutableArray;

@interface ASCDescriber : NSObject {

	id<NSObject> _object;
	NSMutableArray* _properties;

}

@property (nonatomic,readonly) id<NSObject> object;                      //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
+(id)nilObject;
-(NSMutableArray *)properties;
-(id)initWithObject:(id)arg1 ;
-(id<NSObject>)object;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)addObject:(id)arg1 withName:(id)arg2 ;
-(id)finalizeDescription;
-(void)addBool:(BOOL)arg1 withName:(id)arg2 ;
-(void)addSensitiveObject:(id)arg1 withName:(id)arg2 ;
-(void)addDouble:(double)arg1 withName:(id)arg2 ;
-(void)addUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)describeObject;
-(id)describeProperties;
-(void)addInteger:(long long)arg1 withName:(id)arg2 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(void)addInt64:(long long)arg1 withName:(id)arg2 ;
@end

