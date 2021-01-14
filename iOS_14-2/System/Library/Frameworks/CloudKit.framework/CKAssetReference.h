/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString, NSData;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _recordID;
	long long _databaseScope;
	NSString* _fieldName;
	NSData* _fileSignature;

}

@property (assign,nonatomic) long long databaseScope;                    //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;               //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldName;                //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,copy,readonly) NSData * fileSignature;              //@synthesize fileSignature=_fileSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)description;
-(NSString *)fieldName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(CKRecordID *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)fileSignature;
@end

