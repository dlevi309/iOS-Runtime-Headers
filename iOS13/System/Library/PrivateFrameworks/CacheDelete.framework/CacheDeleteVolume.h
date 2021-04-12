/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
*/


@class NSString, NSDictionary;

@interface CacheDeleteVolume : NSObject {

	BOOL _isRoot;
	int _dev;
	unsigned _block_size;
	NSString* _fsType;
	NSString* _mountPoint;
	unsigned long long _initialFreespace;

}

@property (readonly) BOOL isRoot;                                      //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,readonly) NSString * fsType;                      //@synthesize fsType=_fsType - In the implementation block
@property (nonatomic,readonly) NSString * mountPoint;                  //@synthesize mountPoint=_mountPoint - In the implementation block
@property (readonly) unsigned long long initialFreespace;              //@synthesize initialFreespace=_initialFreespace - In the implementation block
@property (nonatomic,readonly) NSDictionary * thresholds; 
@property (nonatomic,readonly) long long state; 
@property (readonly) int dev;                                          //@synthesize dev=_dev - In the implementation block
@property (readonly) unsigned block_size;                              //@synthesize block_size=_block_size - In the implementation block
+(id)validateVolumeAtPath:(id)arg1 ;
+(id)volumeWithPath:(id)arg1 ;
+(id)volumeWithMountpoint:(id)arg1 ;
+(id)mountPointForUUID:(id)arg1 ;
+(id)rootVolume;
+(long long)stateForPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)size;
-(id)initWithPath:(id)arg1 ;
-(long long)state;
-(id)uuid;
-(BOOL)isRoot;
-(BOOL)validate;
-(BOOL)isEqualTo:(id)arg1 ;
-(NSString *)mountPoint;
-(NSDictionary *)thresholds;
-(unsigned long long)initialFreespace;
-(int)dev;
-(NSString *)fsType;
-(unsigned long long)freespace;
-(unsigned long long)amountPurged;
-(id)FSEventsUUID;
-(unsigned)block_size;
@end

