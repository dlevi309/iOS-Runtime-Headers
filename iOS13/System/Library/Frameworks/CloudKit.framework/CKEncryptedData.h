/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {

	NSData* _data;
	NSData* _encryptedData;

}

@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * encryptedData;                  //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,readonly) BOOL needsEncryption; 
@property (nonatomic,readonly) BOOL needsDecryption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)value;
-(void)setData:(NSData *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)encryptedData;
-(BOOL)needsDecryption;
-(id)initWithEncryptedData:(id)arg1 ;
-(BOOL)needsEncryption;
-(void)setEncryptedData:(NSData *)arg1 ;
@end

