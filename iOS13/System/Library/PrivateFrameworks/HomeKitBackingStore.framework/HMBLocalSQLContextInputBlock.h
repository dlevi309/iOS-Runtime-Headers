/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFActivity, HMBLocalSQLContext, NSString;

@interface HMBLocalSQLContextInputBlock : HMFObject <HMFLogging> {

	unsigned long long _blockRow;
	HMFActivity* _activity;
	HMBLocalSQLContext* _owner;
	unsigned long long _zoneRow;
	unsigned long long _type;

}

@property (assign,nonatomic,__weak) HMBLocalSQLContext * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long blockRow;                    //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(unsigned long long)type;
-(void)setOwner:(HMBLocalSQLContext *)arg1 ;
-(HMFActivity *)activity;
-(HMBLocalSQLContext *)owner;
-(id)abort;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)commit:(id)arg1 ;
-(unsigned long long)blockRow;
-(id)updateExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4 ;
-(unsigned long long)zoneRow;
-(void)setBlockRow:(unsigned long long)arg1 ;
-(id)initWithOwner:(id)arg1 zoneRow:(unsigned long long)arg2 blockRow:(unsigned long long)arg3 type:(unsigned long long)arg4 ;
-(id)insertExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4 ;
@end

