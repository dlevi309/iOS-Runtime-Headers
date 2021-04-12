/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface PKCloudStoreRecord : NSObject {

	NSMutableDictionary* _records;
	NSDictionary* _cloudStoreSpecificKeys;

}

@property (nonatomic,copy) NSDictionary * cloudStoreSpecificKeys;              //@synthesize cloudStoreSpecificKeys=_cloudStoreSpecificKeys - In the implementation block
@property (nonatomic,readonly) NSArray * records; 
-(id)description;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)recordsWithRecordType:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(void)setCloudStoreSpecificKeys:(NSDictionary *)arg1 ;
-(NSDictionary *)cloudStoreSpecificKeys;
@end

