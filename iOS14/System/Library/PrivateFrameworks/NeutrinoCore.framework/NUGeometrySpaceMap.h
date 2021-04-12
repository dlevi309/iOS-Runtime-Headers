/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NUTaggedSpaceMapping.h>

@class NSMutableDictionary;

@interface NUGeometrySpaceMap : NSObject <NSCopying, NUTaggedSpaceMapping> {

	NSMutableDictionary* _spaces;

}

@property (retain) NSMutableDictionary * spaces;              //@synthesize spaces=_spaces - In the implementation block
+(id)_reduceSpaces:(id)arg1 withSpaces:(id)arg2 ;
+(BOOL)_canReduceSpaces:(id)arg1 withSpaces:(id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)spaces;
-(id)description;
-(void)applyTransform:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTagNode:(id)arg1 ;
-(id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id*)arg3 ;
-(id)initWithSpaceMap:(id)arg1 ;
-(id)taggedSpacesForKey:(id)arg1 ;
-(id)spacesForKey:(id)arg1 ;
-(id)spaceForKey:(id)arg1 ;
-(void)setSpace:(id)arg1 forKey:(id)arg2 ;
-(void)setSpaces:(id)arg1 forKey:(id)arg2 ;
-(void)setSpacesFromMap:(id)arg1 andPruneAgainstTagNode:(id)arg2 withPath:(id)arg3 ;
-(void)mergeWithSpaceMap:(id)arg1 ;
-(void)setSpaces:(NSMutableDictionary *)arg1 ;
@end

