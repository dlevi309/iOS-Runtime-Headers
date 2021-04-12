/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowQueryTuple : HMFObject {

	unsigned long long _queryRow;
	NSData* _queryData;

}

@property (nonatomic,readonly) unsigned long long queryRow;              //@synthesize queryRow=_queryRow - In the implementation block
@property (nonatomic,readonly) NSData * queryData;                       //@synthesize queryData=_queryData - In the implementation block
-(id)initWithQueryRow:(unsigned long long)arg1 data:(id)arg2 ;
-(unsigned long long)queryRow;
-(NSData *)queryData;
@end

