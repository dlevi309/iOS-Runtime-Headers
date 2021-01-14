/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNCacheBoundingStrategy.h>

@class CNQueue, NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy> {

	CNQueue* _keys;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) CNQueue * keys;                           //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNQueue *)keys;
-(id)init;
-(unsigned long long)capacity;
-(NSString *)description;
-(BOOL)shouldEvictKey:(id)arg1 ;
-(void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3 ;
-(void)willAccessKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

