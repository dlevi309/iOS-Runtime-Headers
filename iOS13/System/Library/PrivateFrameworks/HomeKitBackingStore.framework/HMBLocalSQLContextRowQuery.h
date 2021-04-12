/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSDictionary;

@interface HMBLocalSQLContextRowQuery : HMFObject {

	unsigned long long _recordRow;
	NSDictionary* _tuples;

}

@property (nonatomic,readonly) unsigned long long recordRow;              //@synthesize recordRow=_recordRow - In the implementation block
@property (nonatomic,readonly) NSDictionary * tuples;                     //@synthesize tuples=_tuples - In the implementation block
-(NSDictionary *)tuples;
-(unsigned long long)recordRow;
-(id)initWithRecordRow:(unsigned long long)arg1 tuples:(id)arg2 ;
@end

