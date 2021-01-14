/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _sparseAware;
	NSNumber* _shouldFetchAssetContent;
	NSNumber* _shouldFetchAssetContentInMemory;
	NSNumber* _useMMCSEncryptionV2;

}

@property (nonatomic,copy) NSNumber * sparseAware;                                  //@synthesize sparseAware=_sparseAware - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContent;                      //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) NSNumber * shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSNumber * useMMCSEncryptionV2;                          //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)shouldFetchAssetContent;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(NSNumber *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUseMMCSEncryptionV2:(NSNumber *)arg1 ;
-(NSNumber *)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContent:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)sparseAware;
-(NSNumber *)useMMCSEncryptionV2;
-(void)setSparseAware:(NSNumber *)arg1 ;
@end

