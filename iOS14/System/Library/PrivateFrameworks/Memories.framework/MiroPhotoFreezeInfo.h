/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroPhotoFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _iris;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                   //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                 //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                    //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL iris;                    //@synthesize iris=_iris - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(BOOL)used;
-(BOOL)added;
-(void)setUsed:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(id)dataRepresentation;
-(BOOL)isRemoved;
-(void)setDuration:(double)arg1 ;
-(BOOL)isAdded;
-(BOOL)iris;
-(id)initWithData:(id)arg1 ;
-(BOOL)removed;
-(id)description;
-(void)setAdded:(BOOL)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFreeze;
-(void)setIris:(BOOL)arg1 ;
@end

