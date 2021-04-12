/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)generationCount;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOwner:(HMDResidentMesh *)arg1 ;
-(HMDResidentMesh *)owner;
-(HMDDevice *)device;
-(NSDictionary *)metrics;
-(void)_requestStatus;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)setGenerationCount:(unsigned long long)arg1 ;
-(NSMutableSet *)accessoryUUIDs;
-(void)setAccessoryUUIDs:(NSMutableSet *)arg1 ;
-(void)setAccessoryListWithLinkQuality:(NSMutableDictionary *)arg1 ;
-(id)initWithDevice:(id)arg1 owner:(id)arg2 ;
-(NSMutableDictionary *)accessoryListWithLinkQuality;
@end

