/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBCloudID.h>
#import <libobjc.A.dylib/HMBModelObjectStorage.h>
#import <libobjc.A.dylib/HMBLocalZoneID.h>

@class NSData, CKRecordZoneID, NSString, NSArray;

@interface HMBCloudZoneID : HMBCloudID <HMBModelObjectStorage, HMBLocalZoneID> {

	NSData* _token;
	CKRecordZoneID* _zoneID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) CKRecordZoneID * zoneID;                  //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) NSData * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labels; 
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(CKRecordZoneID *)zoneID;
-(NSArray *)labels;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3 ;
-(id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3 name:(id)arg4 modelID:(id)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSData *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

