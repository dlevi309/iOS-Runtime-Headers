/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerResetTracklistCommand.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand> {

	BOOL _supportsSetQueueCommand;
	NSArray* _devices;
	NSDictionary* _supportedSpecializedQueues;
	NSSet* _supportedQueueTypes;
	NSSet* _supportedCustomDataQueueIdentifiers;

}

@property (nonatomic,copy) NSArray * devices;                                          //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSDictionary * supportedSpecializedQueues;                //@synthesize supportedSpecializedQueues=_supportedSpecializedQueues - In the implementation block
@property (assign,nonatomic) BOOL supportsSetQueueCommand;                             //@synthesize supportsSetQueueCommand=_supportsSetQueueCommand - In the implementation block
@property (nonatomic,retain) NSSet * supportedQueueTypes;                              //@synthesize supportedQueueTypes=_supportedQueueTypes - In the implementation block
@property (nonatomic,retain) NSSet * supportedCustomDataQueueIdentifiers;              //@synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * specializedIntents; 
-(id)clear;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setSupportsSetQueueCommand:(BOOL)arg1 ;
-(void)setSupportedSpecializedQueues:(NSDictionary *)arg1 ;
-(void)setSupportedQueueTypes:(NSSet *)arg1 ;
-(void)setSupportedCustomDataQueueIdentifiers:(NSSet *)arg1 ;
-(NSSet *)supportedQueueTypes;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2 ;
-(BOOL)supportsSetQueueCommand;
-(NSSet *)supportedCustomDataQueueIdentifiers;
-(id)replaceWithPlaybackIntent:(id)arg1 ;
-(NSArray *)specializedIntents;
-(NSDictionary *)supportedSpecializedQueues;
@end

