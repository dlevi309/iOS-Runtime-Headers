/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(int)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setStartTime:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(NSDictionary *)attributes;
-(id)description;
-(int)type;
-(id)plistRepresentation;
-(unsigned long long)hash;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(int)arg1 startTime:(int)arg2 duration:(int)arg3 attributes:(id)arg4 ;
@end

