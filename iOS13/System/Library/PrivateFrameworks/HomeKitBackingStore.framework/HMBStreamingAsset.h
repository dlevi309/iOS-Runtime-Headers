/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMBModelNativeCKWrapper.h>

@class CKStreamingAsset, NSString;

@interface HMBStreamingAsset : HMFObject <NSSecureCoding, HMBModelNativeCKWrapper> {

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
+(BOOL)includeInModelEncoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStreamingAsset:(id)arg1 ;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithUploadStreamingAsset:(id)arg1 downloadStreamingAsset:(id)arg2 ;
-(CKStreamingAsset *)uploadStreamingAsset;
-(CKStreamingAsset *)downloadStreamingAsset;
-(void)setUploadStreamingAsset:(CKStreamingAsset *)arg1 ;
-(void)setDownloadStreamingAsset:(CKStreamingAsset *)arg1 ;
@end

