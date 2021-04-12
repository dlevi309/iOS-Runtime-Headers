/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBModelReference.h>
#import <libobjc.A.dylib/HMBModelNativeCKWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKReference, HMBCloudZone, NSString;

@interface HMBModelCloudReference : HMBModelReference <HMBModelNativeCKWrapper, NSSecureCoding> {

	CKReference* _reference;
	HMBCloudZone* _cloudZone;
	unsigned long long _action;

}

@property (assign,nonatomic,__weak) HMBCloudZone * cloudZone;              //@synthesize cloudZone=_cloudZone - In the implementation block
@property (assign,nonatomic) unsigned long long action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) CKReference * reference;                      //@synthesize reference=_reference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5 ;
+(BOOL)includeInModelEncoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(CKReference *)reference;
-(void)setReference:(CKReference *)arg1 ;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2 ;
-(void)associateWithContainer:(id)arg1 ;
-(id)initWithModelID:(id)arg1 action:(unsigned long long)arg2 ;
-(id)referencedModelFromCloudZone:(id)arg1 allowExternalFetch:(BOOL)arg2 ;
@end

