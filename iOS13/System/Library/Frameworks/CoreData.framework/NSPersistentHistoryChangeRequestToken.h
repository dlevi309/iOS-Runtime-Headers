/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSDate;

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {

	NSData* _fetchData;
	NSDictionary* _token;
	NSDate* _date;
	long long _resultType;
	BOOL _delete;
	BOOL _transactionFromToken;
	unsigned long long _fetchLimit;
	unsigned long long _fetchBatchSize;

}

@property (nonatomic,retain,readonly) NSData * fetchData;                      //@synthesize fetchData=_fetchData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long resultType;                           //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL delete;                                    //@synthesize delete=_delete - In the implementation block
@property (nonatomic,readonly) BOOL transactionFromToken;                      //@synthesize transactionFromToken=_transactionFromToken - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchLimit;                  //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchBatchSize;              //@synthesize fetchBatchSize=_fetchBatchSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSDictionary *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)resultType;
-(unsigned long long)fetchLimit;
-(unsigned long long)fetchBatchSize;
-(id)initForRequest:(id)arg1 ;
-(NSData *)fetchData;
-(BOOL)delete;
-(BOOL)transactionFromToken;
@end

