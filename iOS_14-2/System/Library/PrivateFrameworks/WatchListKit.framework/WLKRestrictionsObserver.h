/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSNumber, WLKDebouncingQueue, NSString;

@interface WLKRestrictionsObserver : NSObject <MCProfileConnectionObserver> {

	NSNumber* _TVRanking;
	NSNumber* _movieRanking;
	WLKDebouncingQueue* _debounceQueue;

}

@property (nonatomic,retain) NSNumber * TVRanking;                            //@synthesize TVRanking=_TVRanking - In the implementation block
@property (nonatomic,retain) NSNumber * movieRanking;                         //@synthesize movieRanking=_movieRanking - In the implementation block
@property (nonatomic,retain) WLKDebouncingQueue * debounceQueue;              //@synthesize debounceQueue=_debounceQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setDebounceQueue:(WLKDebouncingQueue *)arg1 ;
-(WLKDebouncingQueue *)debounceQueue;
-(void)dealloc;
-(void)_evaluateRestrictionsChange;
-(NSNumber *)TVRanking;
-(void)setTVRanking:(NSNumber *)arg1 ;
-(NSNumber *)movieRanking;
-(void)setMovieRanking:(NSNumber *)arg1 ;
@end

