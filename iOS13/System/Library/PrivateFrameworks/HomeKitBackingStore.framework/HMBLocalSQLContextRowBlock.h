/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowBlock : HMFObject {

	unsigned long long _blockRow;
	unsigned long long _type;
	NSData* _optionsData;

}

@property (nonatomic,readonly) unsigned long long blockRow;              //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * optionsData;                     //@synthesize optionsData=_optionsData - In the implementation block
-(unsigned long long)type;
-(NSData *)optionsData;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

