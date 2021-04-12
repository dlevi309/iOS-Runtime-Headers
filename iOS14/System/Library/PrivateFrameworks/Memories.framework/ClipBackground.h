/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PVEffect *)backgroundEffect;
-(NSString *)effectID;
-(void)setBackgroundEffectSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundEffectSettings;
@end

