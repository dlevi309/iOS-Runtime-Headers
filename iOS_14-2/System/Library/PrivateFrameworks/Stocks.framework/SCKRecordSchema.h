/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)fieldNames;
-(NSString *)recordType;
-(BOOL)isValidRecord:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2 ;
-(id)schemaForFieldName:(id)arg1 ;
-(NSArray *)fieldSchemas;
@end

