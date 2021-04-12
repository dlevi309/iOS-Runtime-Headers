/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MetadataRange : NSObject <NSCopying> {

	int _type;
	int _startTime;
	int _duration;
	NSDictionary* _attributes;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) int duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)descriptionForFacePositions:(int)arg1 ;
+(id)descriptionForShotType:(int)arg1 ;
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(int)startTime;
-(void)setStartTime:(int)arg1 ;
-(id)initWithType:(int)arg1 startTime:(int)arg2 duration:(int)arg3 attributes:(id)arg4 ;
-(id)plistRepresentation;
@end

