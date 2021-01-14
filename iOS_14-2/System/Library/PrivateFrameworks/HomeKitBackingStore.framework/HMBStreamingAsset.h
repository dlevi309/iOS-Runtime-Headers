/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMBModelNativeCKWrapper.h>
#import <libobjc.A.dylib/HMBModelObjectMerging.h>

@class CKStreamingAsset, NSString;

@interface HMBStreamingAsset : HMFObject <NSSecureCoding, HMBModelNativeCKWrapper, HMBModelObjectMerging> {

	CKStreamingAsset* _uploadStreamingAsset;
	CKStreamingAsset* _downloadStreamingAsset;

}

@property (nonatomic,retain) CKStreamingAsset * uploadStreamingAsset;                //@synthesize uploadStreamingAsset=_uploadStreamingAsset - In the implementation block
@property (nonatomic,retain) CKStreamingAsset * downloadStreamingAsset;              //@synthesize downloadStreamingAsset=_downloadStreamingAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2 ;
-(id)hmbObjectByMergingFromObject:(id)arg1 ;
-(id)initWithUploadStreamingAsset:(id)arg1 downloadStreamingAsset:(id)arg2 ;
-(CKStreamingAsset *)uploadStreamingAsset;
-(CKStreamingAsset *)downloadStreamingAsset;
-(void)setUploadStreamingAsset:(CKStreamingAsset *)arg1 ;
-(void)setDownloadStreamingAsset:(CKStreamingAsset *)arg1 ;
-(id)initWithUploadStreamingAsset:(id)arg1 ;
@end

