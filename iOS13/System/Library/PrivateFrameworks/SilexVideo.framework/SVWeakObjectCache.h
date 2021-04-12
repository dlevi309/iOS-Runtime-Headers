/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray;

@interface SVWeakObjectCache : NSObject <NSCopying> {

	NSMutableDictionary* _cache;

}

@property (nonatomic,readonly) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSArray * allObjects; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allObjects;
-(NSMutableDictionary *)cache;
-(void)removeObjectForIdentifier:(id)arg1 ;
@end

