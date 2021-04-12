/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/


@interface TLTimelineEntryNodeRecycleBin : NSObject

@property (nonatomic,readonly) unsigned long long numberOfRecycledNodes; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfRecycledNodes; 
+(id)sharedRecycleBin;
-(id)_init;
-(void)recycleEntryNode:(id)arg1 ;
-(id)retrieveRecycledEntryNode;
-(void)emptyRecycleBin;
-(unsigned long long)numberOfRecycledNodes;
-(unsigned long long)maximumNumberOfRecycledNodes;
@end

