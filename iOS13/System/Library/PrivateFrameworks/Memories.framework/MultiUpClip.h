/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setDuration:(int)arg1 ;
-(void)setStartOffset:(int)arg1 ;
-(int)maxDuration;
-(id)movie;
-(id)initWithClip:(id)arg1 ;
-(NSArray *)containedClips;
-(id)speedRanges;
-(BOOL)isMultiUp;
-(void)setContainedClips:(NSArray *)arg1 ;
-(void)setMultiUpEffectSettings:(NSMutableDictionary *)arg1 ;
-(void)setSequentialEffectID:(NSString *)arg1 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM6)arg1 inProject:(id)arg2 ;
-(BOOL)expandsEditList;
-(NSString *)sequentialEffectID;
-(PVEffect *)multiUpEffect;
-(NSMutableDictionary *)multiUpEffectSettings;
@end

