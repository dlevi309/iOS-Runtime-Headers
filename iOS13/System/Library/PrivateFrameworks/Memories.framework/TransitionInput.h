/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(KonaClip *)clip;
-(CGSize)naturalSize;
-(int)ID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setClip:(KonaClip *)arg1 ;
-(void)setID:(int)arg1 ;
@end

