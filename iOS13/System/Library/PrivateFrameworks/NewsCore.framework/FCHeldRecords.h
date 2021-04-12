/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)count;
-(NSArray *)allRecordIDs;
-(NSArray *)allRecords;
-(void)enumerateRecordsAndInterestTokensWithBlock:(/*^block*/id)arg1 ;
-(id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2 ;
-(id)transformRecordsByIDWithBlock:(/*^block*/id)arg1 ;
-(id)heldRecordsPassingTest:(/*^block*/id)arg1 ;
-(id)onlyRecord;
-(FCInterestToken *)onlyInterestToken;
-(id)recordWithID:(id)arg1 ;
-(id)transformRecordsWithBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)recordsByID;
-(id)interestTokenForID:(id)arg1 ;
-(NSDictionary *)interestTokensByID;
-(void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)transformRecordsInOrder:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)heldRecordsForIDs:(id)arg1 ;
@end

