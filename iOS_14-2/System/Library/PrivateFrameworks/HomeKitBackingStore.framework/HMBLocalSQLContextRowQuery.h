/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

