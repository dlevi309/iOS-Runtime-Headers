/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKUploadRequestMetadata.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding> {

	NSArray* _fileSignatures;
	NSArray* _referenceSignatures;

}

@property (nonatomic,readonly) NSArray * referenceSignatures;              //@synthesize referenceSignatures=_referenceSignatures - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fileSignatures;              //@synthesize fileSignatures=_fileSignatures - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignatures:(id)arg6 referenceSignatures:(id)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)fileSignatures;
-(NSArray *)referenceSignatures;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

