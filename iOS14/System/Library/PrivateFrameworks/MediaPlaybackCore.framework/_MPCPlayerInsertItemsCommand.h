/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerInsertItemsCommand.h>

@class NSArray, NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand> {

	BOOL _supportsCreateStation;
	NSArray* _devices;
	NSSet* _supportedInsertionPositions;
	NSSet* _supportedQueueTypes;
	NSSet* _supportedCustomDataQueueIdentifiers;

}

@property (nonatomic,copy) NSArray * devices;                                          //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) BOOL supportsCreateStation;                               //@synthesize supportsCreateStation=_supportsCreateStation - In the implementation block
@property (nonatomic,retain) NSSet * supportedInsertionPositions;                      //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
@property (nonatomic,retain) NSSet * supportedQueueTypes;                              //@synthesize supportedQueueTypes=_supportedQueueTypes - In the implementation block
@property (nonatomic,retain) NSSet * supportedCustomDataQueueIdentifiers;              //@synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)supportedInsertionPositions;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setSupportedInsertionPositions:(NSSet *)arg1 ;
-(void)setSupportedQueueTypes:(NSSet *)arg1 ;
-(NSSet *)supportedQueueTypes;
-(void)setSupportedCustomDataQueueIdentifiers:(NSSet *)arg1 ;
-(NSSet *)supportedCustomDataQueueIdentifiers;
-(void)setSupportsCreateStation:(BOOL)arg1 ;
-(id)_createRadioStationCommandRequest;
-(id)_insertWithOptions:(id)arg1 ;
-(BOOL)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(BOOL)arg2 atInsertionPosition:(int)arg3 ;
-(BOOL)supportsCreateStation;
-(id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1 ;
-(id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2 ;
-(id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1 ;
@end

