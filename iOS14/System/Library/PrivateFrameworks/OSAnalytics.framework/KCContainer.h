/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


#import <OSAnalytics/OSAnalytics-Structs.h>
@class NSMutableDictionary;

@interface KCContainer : NSObject {

	unsigned _type;
	int _pid;
	int _unindexed_frames;
	int _invalid_images;
	unsigned long long _tag;
	NSMutableDictionary* _data;
	NSMutableDictionary* _truncated_threads;

}

@property (nonatomic,readonly) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long tag;                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * truncated_threads;              //@synthesize truncated_threads=_truncated_threads - In the implementation block
@property (assign,nonatomic) int unindexed_frames;                                   //@synthesize unindexed_frames=_unindexed_frames - In the implementation block
@property (assign,nonatomic) int invalid_images;                                     //@synthesize invalid_images=_invalid_images - In the implementation block
-(int)pid;
-(void)omit;
-(unsigned long long)tag;
-(id)initWithKCData:(kcdata_iter*)arg1 ;
-(NSMutableDictionary *)truncated_threads;
-(int)unindexed_frames;
-(void)setUnindexed_frames:(int)arg1 ;
-(int)invalid_images;
-(void)setInvalid_images:(int)arg1 ;
-(NSMutableDictionary *)data;
-(unsigned)type;
-(void)setPid:(int)arg1 ;
@end

