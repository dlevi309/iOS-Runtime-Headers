/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMObjectMerge.h>

@class _HMAccessoryProfile, NSUUID, NSArray, HMAccessory, NSString;

@interface HMAccessoryProfile : NSObject <HMObjectMerge> {

	_HMAccessoryProfile* _accessoryProfile;

}

@property (nonatomic,readonly) _HMAccessoryProfile * accessoryProfile;              //@synthesize accessoryProfile=_accessoryProfile - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * uuid; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,__weak,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)services;
-(NSUUID *)uuid;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)initWithAccessoryProfile:(id)arg1 ;
-(NSString *)description;
-(void)refreshStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(NSUUID *)profileUniqueIdentifier;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(_HMAccessoryProfile *)accessoryProfile;
-(BOOL)isEqual:(id)arg1 ;
@end

