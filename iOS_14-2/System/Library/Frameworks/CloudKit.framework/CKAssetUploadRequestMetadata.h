/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKUploadRequestMetadata.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding> {

	long long _listIndex;
	NSData* _fileSignature;
	NSData* _referenceSignature;

}

@property (nonatomic,readonly) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,readonly) long long listIndex;                      //@synthesize listIndex=_listIndex - In the implementation block
@property (nonatomic,copy,readonly) NSData * fileSignature;              //@synthesize fileSignature=_fileSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7 ;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7 listIndex:(long long)arg8 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
-(long long)listIndex;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
@end

