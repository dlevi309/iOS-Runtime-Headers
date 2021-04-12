/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectCoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMBQueryableModelFieldCoder.h>

@class NSUUID, HMBLocalZone, NSString;

@interface HMBModelReference : HMFObject <HMBModelObjectCoder, NSSecureCoding, HMBQueryableModelFieldCoder> {

	NSUUID* _hmbModelID;
	HMBLocalZone* _localZone;

}

@property (assign,nonatomic,__weak) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,readonly) NSUUID * hmbModelID;                        //@synthesize hmbModelID=_hmbModelID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)hmbEncodeQueryableParameter:(id)arg1 ;
+(id)hmbDecodeQueryableParameter:(id)arg1 ;
+(id)hmbDescriptionForEncodedQueryableVariable:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(HMBLocalZone *)localZone;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)hmbModelID;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(void)associateWithContainer:(id)arg1 ;
-(id)isValidForContainer:(id)arg1 updatedModelIDs:(id)arg2 ;
-(id)initWithModelID:(id)arg1 ;
-(id)referencedModelFromLocalZone:(id)arg1 error:(id*)arg2 ;
@end

