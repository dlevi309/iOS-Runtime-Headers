/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectStorage.h>
#import <libobjc.A.dylib/HMBModelObjectCoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMBLocalZone, NSString;

@interface HMBModelReference : HMFObject <HMBModelObjectStorage, HMBModelObjectCoder, NSSecureCoding> {

	NSUUID* _hmbModelID;
	HMBLocalZone* _localZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,retain) NSUUID * hmbModelID;                          //@synthesize hmbModelID=_hmbModelID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMBLocalZone *)localZone;
-(NSUUID *)hmbModelID;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setHmbModelID:(NSUUID *)arg1 ;
-(void)associateWithContainer:(id)arg1 ;
-(id)isValidForContainer:(id)arg1 updatedModelIDs:(id)arg2 ;
-(id)initWithModelID:(id)arg1 ;
-(id)referencedModelFromLocalZone:(id)arg1 error:(id*)arg2 ;
@end

