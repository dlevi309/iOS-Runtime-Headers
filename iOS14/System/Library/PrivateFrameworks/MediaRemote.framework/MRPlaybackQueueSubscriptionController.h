/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, MSVMutableBidirectionalDictionary, NSObject, MRPlayerPath;

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding> {

	NSMutableArray* _requestFilters;
	NSMutableSet* _requests;
	MSVMutableBidirectionalDictionary* _offsets;
	NSObject*<OS_dispatch_queue> _queue;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPlayerPath:(id)arg1 ;
-(id)contentItemIdentifierForOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)restoreStateFromController:(id)arg1 ;
-(void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2 ;
-(id)requestForSubscribedContentItemIdentifier:(id)arg1 ;
-(id)description;
-(BOOL)hasRequest:(id)arg1 ;
-(id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1 ;
-(id)offsetForIdentifier:(id)arg1 ;
-(void)augmentCommandOptions:(id)arg1 forCommand:(unsigned)arg2 ;
-(MRPlayerPath *)playerPath;
-(void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)addRequest:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
@end

