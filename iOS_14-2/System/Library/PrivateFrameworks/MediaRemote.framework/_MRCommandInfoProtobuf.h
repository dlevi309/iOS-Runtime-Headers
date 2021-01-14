/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR1* _preferredIntervals;
	SCD_Struct_MR8* _supportedInsertionPositions;
	SCD_Struct_MR8* _supportedPlaybackQueueTypes;
	SCD_Struct_MR8* _supportedQueueEndActions;
	SCD_Struct_MR21* _supportedRates;
	int _canScrub;
	int _command;
	NSMutableArray* _currentPlaybackSessionTypes;
	int _currentQueueEndAction;
	int _disabledReason;
	NSString* _localizedShortTitle;
	NSString* _localizedTitle;
	float _maximumRating;
	float _minimumRating;
	int _numAvailableSkips;
	NSString* _playbackSessionIdentifier;
	float _preferredPlaybackRate;
	int _presentationStyle;
	int _repeatMode;
	int _shuffleMode;
	int _skipFrequency;
	int _skipInterval;
	NSMutableArray* _supportedCustomQueueIdentifiers;
	NSMutableArray* _supportedPlaybackSessionIdentifiers;
	NSMutableArray* _supportedPlaybackSessionTypes;
	int _upNextItemCount;
	BOOL _active;
	BOOL _enabled;
	BOOL _supportsSharedQueue;
	SCD_Struct_MR22 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

