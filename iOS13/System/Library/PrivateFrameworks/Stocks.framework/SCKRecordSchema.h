/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString, NSArray;

@interface SCKRecordSchema : NSObject {

	NSString* _recordType;
	NSArray* _fieldSchemas;

}

@property (nonatomic,copy,readonly) NSString * recordType;               //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldNames; 
@property (nonatomic,copy,readonly) NSArray * fieldSchemas;              //@synthesize fieldSchemas=_fieldSchemas - In the implementation block
-(NSString *)recordType;
-(NSArray *)fieldNames;
-(BOOL)isValidRecord:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2 ;
-(NSArray *)fieldSchemas;
-(id)schemaForFieldName:(id)arg1 ;
@end

