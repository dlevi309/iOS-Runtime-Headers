/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo {

	NSArray* _ranges;

}

@property (nonatomic,retain) NSArray * ranges;              //@synthesize ranges=_ranges - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)token;
-(id)initWithData:(id)arg1 ;
-(id)dataRepresentation;
-(BOOL)isAdded;
-(BOOL)isRemoved;
-(void)setRanges:(NSArray *)arg1 ;
-(NSArray *)ranges;
-(BOOL)isFreeze;
@end

