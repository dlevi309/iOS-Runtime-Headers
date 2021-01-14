/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, FCInterestToken, NSArray;

@interface FCHeldRecords : NSObject {

	NSDictionary* _recordsByID;
	NSDictionary* _interestTokensByID;

}

@property (nonatomic,readonly) NSDictionary * recordsByID;                       //@synthesize recordsByID=_recordsByID - In the implementation block
@property (nonatomic,readonly) NSDictionary * interestTokensByID;                //@synthesize interestTokensByID=_interestTokensByID - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id onlyRecord; 
@property (nonatomic,readonly) FCInterestToken * onlyInterestToken; 
@property (nonatomic,readonly) NSArray * allRecordIDs; 
@property (nonatomic,readonly) NSArray * allRecords; 
+(id)heldRecordsByMerging:(id)arg1 with:(id)arg2 ;
-(id)transformRecordsByIDWithBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)recordsByID;
-(id)interestTokenForID:(id)arg1 ;
-(unsigned long long)count;
-(NSArray *)allRecordIDs;
-(id)heldRecordsForIDs:(id)arg1 ;
-(id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2 ;
-(id)transformRecordsWithBlock:(/*^block*/id)arg1 ;
-(id)onlyRecord;
-(FCInterestToken *)onlyInterestToken;
-(id)heldRecordsPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)allRecords;
-(void)enumerateRecordsAndInterestTokensWithBlock:(/*^block*/id)arg1 ;
-(id)transformRecordsInOrder:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)interestTokensByID;
-(id)recordWithID:(id)arg1 ;
@end

