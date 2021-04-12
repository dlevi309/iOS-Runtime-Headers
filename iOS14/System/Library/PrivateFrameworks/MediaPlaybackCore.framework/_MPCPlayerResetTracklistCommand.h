/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSArray * specializedIntents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clear;
-(NSArray *)specializedIntents;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(NSDictionary *)supportedSpecializedQueues;
-(id)replaceWithPlaybackIntent:(id)arg1 ;
-(void)setSupportedQueueTypes:(NSSet *)arg1 ;
-(id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2 ;
-(void)setSupportedSpecializedQueues:(NSDictionary *)arg1 ;
-(NSSet *)supportedQueueTypes;
-(BOOL)supportsSetQueueCommand;
-(void)setSupportsSetQueueCommand:(BOOL)arg1 ;
-(void)setSupportedCustomDataQueueIdentifiers:(NSSet *)arg1 ;
-(NSSet *)supportedCustomDataQueueIdentifiers;
-(id)clearUpNextItems;
@end

