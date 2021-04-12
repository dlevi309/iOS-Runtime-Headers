/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dataRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
-(void)setAdded:(BOOL)arg1 ;
-(BOOL)added;
-(BOOL)isAdded;
-(BOOL)isRemoved;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)removed;
-(BOOL)isFreeze;
-(BOOL)iris;
-(void)setIris:(BOOL)arg1 ;
@end

