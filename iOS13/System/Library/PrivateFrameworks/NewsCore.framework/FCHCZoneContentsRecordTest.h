/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)expectedValues;
-(void)setExpectedValues:(NSDictionary *)arg1 ;
-(void)setUnencryptedFields:(NSArray *)arg1 ;
-(void)setEncryptedFields:(NSArray *)arg1 ;
-(NSArray *)unencryptedFields;
-(NSArray *)encryptedFields;
@end

