/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray, NSDictionary;

@interface FCHCZoneContentsRecordTest : NSObject {

	NSString* _recordType;
	NSArray* _unencryptedFields;
	NSArray* _encryptedFields;
	NSDictionary* _expectedValues;

}

@property (nonatomic,copy) NSString * recordType;                      //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSArray * unencryptedFields;                //@synthesize unencryptedFields=_unencryptedFields - In the implementation block
@property (nonatomic,copy) NSArray * encryptedFields;                  //@synthesize encryptedFields=_encryptedFields - In the implementation block
@property (nonatomic,copy) NSDictionary * expectedValues;              //@synthesize expectedValues=_expectedValues - In the implementation block
-(NSString *)recordType;
-(void)setRecordType:(NSString *)arg1 ;
-(NSArray *)encryptedFields;
-(void)setUnencryptedFields:(NSArray *)arg1 ;
-(void)setEncryptedFields:(NSArray *)arg1 ;
-(void)setExpectedValues:(NSDictionary *)arg1 ;
-(NSArray *)unencryptedFields;
-(NSDictionary *)expectedValues;
@end

