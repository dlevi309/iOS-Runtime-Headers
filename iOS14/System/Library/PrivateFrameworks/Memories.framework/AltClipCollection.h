/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Sp29*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)clips;
-(unsigned long long)count;
-(void)setClips:(NSMutableDictionary *)arg1 ;
-(id)description;
-(NSArray *)allValues;
-(id)initWithParent:(id)arg1 ;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParentClip:(id<AltAspect>)arg1 ;
-(id<AltAspect>)parentClip;
-(id)objectClosestToKeyedSubscript:(id)arg1 ;
@end

