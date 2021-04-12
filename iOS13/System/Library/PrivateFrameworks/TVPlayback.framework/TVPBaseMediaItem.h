/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPMediaItem.h>

@class NSMutableDictionary, NSString;

@interface TVPBaseMediaItem : NSObject <TVPMediaItem> {

	NSMutableDictionary* _metadataDictionary;
	NSMutableDictionary* _transactionDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)mediaItemURL;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(id)reportingDelegate;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(void)_setMetadata:(id)arg1 forProperty:(id)arg2 postNotification:(BOOL)arg3 ;
-(void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1 ;
-(void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1 ;
-(void)removeMediaItemMetadataForProperty:(id)arg1 ;
@end

