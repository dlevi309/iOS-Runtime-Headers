/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithController:(id)arg1 ;
-(MPMusicPlayerControllerApplicationQueueModifications *)modifications;
-(void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2 ;
-(NSMutableDictionary *)insertedDescriptors;
-(void)setInsertedDescriptors:(NSMutableDictionary *)arg1 ;
@end

