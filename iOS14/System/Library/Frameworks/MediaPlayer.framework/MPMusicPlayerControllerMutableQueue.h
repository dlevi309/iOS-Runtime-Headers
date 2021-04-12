/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMusicPlayerControllerQueue.h>

@class NSMutableDictionary, NSMutableArray, MPMusicPlayerControllerApplicationQueueModifications;

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue {

	NSMutableDictionary* _insertedDescriptors;
	NSMutableArray* _removedItems;

}

@property (nonatomic,retain) NSMutableDictionary * insertedDescriptors;                                           //@synthesize insertedDescriptors=_insertedDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedItems;                                                       //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerApplicationQueueModifications * modifications; 
-(void)removeItem:(id)arg1 ;
-(NSMutableArray *)removedItems;
-(void)setRemovedItems:(NSMutableArray *)arg1 ;
-(MPMusicPlayerControllerApplicationQueueModifications *)modifications;
-(void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2 ;
-(void)setInsertedDescriptors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)insertedDescriptors;
-(id)initWithController:(id)arg1 ;
@end

