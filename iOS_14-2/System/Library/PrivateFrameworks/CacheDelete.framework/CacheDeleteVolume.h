/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
*/


#import <CacheDelete/CacheDelete-Structs.h>
@class NSString, NSDictionary;

@interface CacheDeleteVolume : NSObject {

	BOOL _isRoot;
	int _dev;
	unsigned _block_size;
	NSString* _fsType;
	NSString* _mountPoint;
	unsigned long long _initialFreespace;
	NSDictionary* _thresholds;
	NSString* _bsdName;

}

@property (readonly) BOOL isRoot;                                      //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,readonly) NSString * fsType;                      //@synthesize fsType=_fsType - In the implementation block
@property (nonatomic,readonly) NSString * mountPoint;                  //@synthesize mountPoint=_mountPoint - In the implementation block
@property (readonly) unsigned long long initialFreespace;              //@synthesize initialFreespace=_initialFreespace - In the implementation block
@property (nonatomic,readonly) NSDictionary * thresholds;              //@synthesize thresholds=_thresholds - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) int dev;                                          //@synthesize dev=_dev - In the implementation block
@property (readonly) unsigned block_size;                              //@synthesize block_size=_block_size - In the implementation block
@property (nonatomic,readonly) NSString * bsdName;                     //@synthesize bsdName=_bsdName - In the implementation block
+(id)mountPointForUUID:(id)arg1 ;
+(long long)stateForPath:(id)arg1 ;
+(id)volumeWithMountpoint:(id)arg1 ;
+(id)rootVolume;
+(id)validateVolumeAtPath:(id)arg1 ;
+(id)volumeWithPath:(id)arg1 ;
-(BOOL)validate;
-(unsigned)block_size;
-(BOOL)isRoot;
-(NSString *)mountPoint;
-(id)uuid;
-(NSDictionary *)thresholds;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)size;
-(id)initWithVolume:(id)arg1 ;
-(unsigned long long)amountPurged;
-(unsigned long long)initialFreespace;
-(id)description;
-(BOOL)isEqualTo:(id)arg1 ;
-(NSString *)bsdName;
-(id)FSEventsUUID;
-(unsigned long long)hash;
-(long long)state;
-(int)dev;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)freespace;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)fsType;
@end

