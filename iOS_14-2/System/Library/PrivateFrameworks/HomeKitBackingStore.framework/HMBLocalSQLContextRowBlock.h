/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)optionsData;
-(id)attributeDescriptions;
-(unsigned long long)type;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

