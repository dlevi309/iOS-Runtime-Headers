/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSCurationDebugObject.h>

@class NSSet, NSString;

@interface CLSCurationDebugCluster : CLSCurationDebugObject {

	NSSet* _debugClusters;
	NSSet* _unclusteredDebugItems;
	NSString* _reason;

}

@property (nonatomic,retain) NSSet * unclusteredDebugItems;              //@synthesize unclusteredDebugItems=_unclusteredDebugItems - In the implementation block
@property (readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
-(NSString *)reason;
-(id)dictionaryRepresentation;
-(id)timestamp;
-(void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;
-(id)initWithDebugItems:(id)arg1 reason:(id)arg2 ;
-(id)allDebugItems;
-(void)setDebugClusters:(id)arg1 ;
-(void)addDebugClusters:(id)arg1 ;
-(NSSet *)unclusteredDebugItems;
-(void)setUnclusteredDebugItems:(NSSet *)arg1 ;
@end

