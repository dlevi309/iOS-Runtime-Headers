/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class KonaClip;

@interface TransitionInput : NSObject {

	int _ID;
	KonaClip* _clip;
	CGSize _naturalSize;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) int ID;                                   //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                       //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) KonaClip * clip;                          //@synthesize clip=_clip - In the implementation block
-(KonaClip *)clip;
-(int)ID;
-(void)setID:(int)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(id)description;
-(void)setClip:(KonaClip *)arg1 ;
@end

