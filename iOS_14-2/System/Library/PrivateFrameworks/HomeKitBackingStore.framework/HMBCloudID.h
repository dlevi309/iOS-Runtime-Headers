/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectStorage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKContainerID, NSString, NSUUID;

@interface HMBCloudID : HMFObject <HMBModelObjectStorage, NSSecureCoding, NSCopying> {

	CKContainerID* _containerID;
	long long _scope;
	NSString* _name;
	NSUUID* _modelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKContainerID * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) long long scope;                          //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * modelID;                         //@synthesize modelID=_modelID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSUUID *)modelID;
-(long long)scope;
-(CKContainerID *)containerID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 scope:(long long)arg2 name:(id)arg3 modelID:(id)arg4 ;
-(NSString *)name;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContainerID:(id)arg1 scope:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

