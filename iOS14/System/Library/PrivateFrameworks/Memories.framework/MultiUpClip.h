/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class PVEffect, NSMutableDictionary, NSArray, NSString;

@interface MultiUpClip : MovieClip <CompoundClipInformation> {

	int _type;
	PVEffect* _multiUpEffect;
	NSMutableDictionary* _multiUpEffectSettings;
	NSArray* _containedClips;
	NSString* _sequentialEffectID;

}

@property (assign,nonatomic) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * containedClips;                                 //@synthesize containedClips=_containedClips - In the implementation block
@property (nonatomic,readonly) PVEffect * multiUpEffect;                               //@synthesize multiUpEffect=_multiUpEffect - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * multiUpEffectSettings;              //@synthesize multiUpEffectSettings=_multiUpEffectSettings - In the implementation block
@property (nonatomic,retain) NSString * sequentialEffectID;                            //@synthesize sequentialEffectID=_sequentialEffectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(int)arg1 ;
-(id)movie;
-(id)init;
-(int)maxDuration;
-(void)setStartOffset:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(NSArray *)containedClips;
-(id)speedRanges;
-(BOOL)isMultiUp;
-(void)setContainedClips:(NSArray *)arg1 ;
-(void)setMultiUpEffectSettings:(NSMutableDictionary *)arg1 ;
-(void)setSequentialEffectID:(NSString *)arg1 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM9)arg1 inProject:(id)arg2 ;
-(BOOL)expandsEditList;
-(NSString *)sequentialEffectID;
-(PVEffect *)multiUpEffect;
-(NSMutableDictionary *)multiUpEffectSettings;
@end

