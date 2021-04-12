/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSArray, NSString;

@interface CRIndex : NSObject <NSCopying, CRDataType, CRCoding> {

	NSArray* _indexPath;

}

@property (nonatomic,retain) NSArray * indexPath;                   //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)indexWithPath:(id)arg1 ;
+(id)indexForReplica:(id)arg1 betweenIndex:(id)arg2 andIndex:(id)arg3 ;
-(long long)compare:(id)arg1 ;
-(void)setIndexPath:(NSArray *)arg1 ;
-(id)init;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(NSArray *)indexPath;
-(void)setDocument:(id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)tombstone;
-(unsigned long long)depth;
-(id)initWithCRCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexAtDepth:(unsigned long long)arg1 withInteger:(long long)arg2 replica:(id)arg3 ;
-(id)nextIndexForReplica:(id)arg1 ;
-(id)previousIndexForReplica:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

