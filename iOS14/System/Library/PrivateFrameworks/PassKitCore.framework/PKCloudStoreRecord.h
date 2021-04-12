/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface PKCloudStoreRecord : NSObject {

	NSMutableDictionary* _records;
	NSDictionary* _cloudStoreSpecificKeys;

}

@property (nonatomic,copy) NSDictionary * cloudStoreSpecificKeys;              //@synthesize cloudStoreSpecificKeys=_cloudStoreSpecificKeys - In the implementation block
@property (nonatomic,readonly) NSArray * records; 
-(NSArray *)records;
-(id)initWithRecords:(id)arg1 ;
-(NSDictionary *)cloudStoreSpecificKeys;
-(void)setCloudStoreSpecificKeys:(NSDictionary *)arg1 ;
-(id)description;
-(id)recordsWithRecordType:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
@end

