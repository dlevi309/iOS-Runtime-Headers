/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AltAspect;
@class NSMutableDictionary, NSArray;

@interface AltClipCollection : NSObject <NSFastEnumeration, NSCopying> {

	NSMutableDictionary* _clips;
	id<AltAspect> _parentClip;

}

@property (nonatomic,retain) NSMutableDictionary * clips;                  //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic,__weak) id<AltAspect> parentClip;              //@synthesize parentClip=_parentClip - In the implementation block
@property (readonly) NSArray * allKeys; 
@property (readonly) NSArray * allValues; 
@property (readonly) unsigned long long count; 
+(id)recommendedAspects;
+(id)recommendedAdditionalAspects;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Sp26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithParent:(id)arg1 ;
-(NSArray *)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setClips:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clips;
-(void)setParentClip:(id<AltAspect>)arg1 ;
-(id<AltAspect>)parentClip;
-(id)objectClosestToKeyedSubscript:(id)arg1 ;
@end

