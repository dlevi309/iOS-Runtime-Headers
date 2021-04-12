/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setUseMMCSEncryptionV2:(NSNumber *)arg1 ;
-(NSNumber *)sparseAware;
-(NSNumber *)shouldFetchAssetContent;
-(NSNumber *)shouldFetchAssetContentInMemory;
-(NSNumber *)useMMCSEncryptionV2;
-(void)setSparseAware:(NSNumber *)arg1 ;
-(void)setShouldFetchAssetContent:(NSNumber *)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(NSNumber *)arg1 ;
@end

