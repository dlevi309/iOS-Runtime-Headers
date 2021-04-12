/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)init;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithEncryptedData:(id)arg1 ;
-(BOOL)needsEncryption;
-(void)setEncryptedData:(NSData *)arg1 ;
-(NSString *)description;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)encryptedData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)needsDecryption;
@end

