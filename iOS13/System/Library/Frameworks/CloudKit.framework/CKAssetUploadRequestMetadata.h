/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) long long listIndex;                        //@synthesize listIndex=_listIndex - In the implementation block
@property (nonatomic,readonly) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(long long)listIndex;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignature:(id)arg6 referenceSignature:(id)arg7 ;
-(void)setListIndex:(long long)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
@end

