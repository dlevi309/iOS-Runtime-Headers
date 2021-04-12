/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMFActivity;

@interface HMBLocalSQLContextOutputBlock : HMFObject {

	HMBLocalSQLContext* _owner;
	unsigned long long _zoneRow;
	unsigned long long _blockRow;
	HMFActivity* _activity;

}

@property (assign,nonatomic,__weak) HMBLocalSQLContext * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long blockRow;                    //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                       //@synthesize activity=_activity - In the implementation block
+(id)logCategory;
-(void)setOwner:(HMBLocalSQLContext *)arg1 ;
-(HMFActivity *)activity;
-(HMBLocalSQLContext *)owner;
-(id)abort;
-(id)commit:(id)arg1 ;
-(unsigned long long)blockRow;
-(unsigned long long)zoneRow;
-(void)setBlockRow:(unsigned long long)arg1 ;
-(id)initWithOwner:(id)arg1 zoneRow:(unsigned long long)arg2 blockRow:(unsigned long long)arg3 ;
-(id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3 ;
@end

