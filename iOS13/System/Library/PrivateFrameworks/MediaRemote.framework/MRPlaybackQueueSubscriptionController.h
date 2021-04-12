/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, MSVMutableBidirectionalDictionary, NSObject, _MRNowPlayingPlayerPathProtobuf;

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding> {

	NSMutableArray* _requestFilters;
	NSMutableSet* _requests;
	MSVMutableBidirectionalDictionary* _offsets;
	NSObject*<OS_dispatch_queue> _queue;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addRequest:(id)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)augmentCommandOptions:(id)arg1 forCommand:(unsigned)arg2 ;
-(id)contentItemIdentifierForOffset:(long long)arg1 ;
-(id)requestForSubscribedContentItemIdentifier:(id)arg1 ;
-(id)offsetForIdentifier:(id)arg1 ;
-(void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)hasRequest:(id)arg1 ;
-(void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1 ;
-(void)_removeRequestID:(id)arg1 ;
-(void)restoreStateFromController:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(id)requestForContentItemIdentifier:(id)arg1 ;
@end

