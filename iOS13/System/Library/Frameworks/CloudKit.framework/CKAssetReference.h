/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)recordID;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)fieldName;
-(NSData *)fileSignature;
-(id)initWithExistingRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 fileSignature:(id)arg4 ;
@end

