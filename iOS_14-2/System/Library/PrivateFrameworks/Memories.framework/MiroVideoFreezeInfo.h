/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo {

	NSArray* _ranges;

}

@property (nonatomic,retain) NSArray * ranges;              //@synthesize ranges=_ranges - In the implementation block
-(id)dataRepresentation;
-(BOOL)isRemoved;
-(NSArray *)ranges;
-(BOOL)isAdded;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(void)setRanges:(NSArray *)arg1 ;
-(id)token;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFreeze;
@end

