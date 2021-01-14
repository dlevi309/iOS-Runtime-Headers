/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDictionary, HMDResidentMesh, NSMutableSet, NSMutableDictionary;

@interface HMDResidentMeshMeshStorage : HMFObject {

	BOOL _enabled;
	HMDDevice* _device;
	NSDictionary* _metrics;
	HMDResidentMesh* _owner;
	NSMutableSet* _accessoryUUIDs;
	unsigned long long _generationCount;
	NSMutableDictionary* _accessoryListWithLinkQuality;

}

@property (assign,nonatomic,__weak) HMDResidentMesh * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                          //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSMutableSet * accessoryUUIDs;                                   //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long generationCount;                              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryListWithLinkQuality;              //@synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                            //@synthesize device=_device - In the implementation block
-(void)setMetrics:(NSDictionary *)arg1 ;
-(BOOL)enabled;
-(NSDictionary *)metrics;
-(HMDResidentMesh *)owner;
-(unsigned long long)generationCount;
-(void)_requestStatus;
-(void)setEnabled:(BOOL)arg1 ;
-(HMDDevice *)device;
-(void)setOwner:(HMDResidentMesh *)arg1 ;
-(NSMutableSet *)accessoryUUIDs;
-(void)setAccessoryUUIDs:(NSMutableSet *)arg1 ;
-(void)setGenerationCount:(unsigned long long)arg1 ;
-(void)setAccessoryListWithLinkQuality:(NSMutableDictionary *)arg1 ;
-(id)initWithDevice:(id)arg1 owner:(id)arg2 ;
-(NSMutableDictionary *)accessoryListWithLinkQuality;
@end

