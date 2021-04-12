/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSMutableDictionary, NSString;

@interface ClipBackground : NSObject <NSCopying> {

	PVEffect* _effect;
	int _type;
	NSMutableDictionary* _backgroundEffectSettings;

}

@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundEffectSettings;              //@synthesize backgroundEffectSettings=_backgroundEffectSettings - In the implementation block
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) PVEffect * backgroundEffect; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(PVEffect *)backgroundEffect;
-(NSString *)effectID;
-(void)setBackgroundEffectSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundEffectSettings;
@end

