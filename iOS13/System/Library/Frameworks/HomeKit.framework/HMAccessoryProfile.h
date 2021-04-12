/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMObjectMerge.h>

@class _HMAccessoryProfile, NSUUID, NSArray, HMAccessory, NSString;

@interface HMAccessoryProfile : NSObject <HMObjectMerge> {

	_HMAccessoryProfile* _accessoryProfile;

}

@property (nonatomic,readonly) _HMAccessoryProfile * accessoryProfile;              //@synthesize accessoryProfile=_accessoryProfile - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,__weak,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uniqueIdentifier;
-(NSArray *)services;
-(HMAccessory *)accessory;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSUUID *)profileUniqueIdentifier;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(_HMAccessoryProfile *)accessoryProfile;
-(id)initWithAccessoryProfile:(id)arg1 ;
@end

