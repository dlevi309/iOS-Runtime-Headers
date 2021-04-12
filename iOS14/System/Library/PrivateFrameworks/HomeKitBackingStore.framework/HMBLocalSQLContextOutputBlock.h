/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMFActivity, HMBLocalSQLContext;

@interface HMBLocalSQLContextOutputBlock : HMFObject <HMFLogging> {

	NSString* _identifier;
	unsigned long long _blockRow;
	HMFActivity* _activity;
	HMBLocalSQLContext* _owner;
	unsigned long long _zoneRow;

}

@property (assign,nonatomic,__weak) HMBLocalSQLContext * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long blockRow;                    //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)abort;
-(id)commit:(id)arg1 ;
-(HMBLocalSQLContext *)owner;
-(HMFActivity *)activity;
-(id)logIdentifier;
-(unsigned long long)zoneRow;
-(void)setOwner:(HMBLocalSQLContext *)arg1 ;
-(NSString *)identifier;
-(unsigned long long)blockRow;
-(void)setBlockRow:(unsigned long long)arg1 ;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4 ;
-(id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3 ;
@end

