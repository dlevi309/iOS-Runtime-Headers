/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPOrderedReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MSPCollectionItemReplica : MSPOrderedReplica <MSPContainerStateSnapshot, NSCopying>

@property (nonatomic,copy,readonly) NSArray * contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemReplicaWithData:(id)arg1 ;
-(NSArray *)contents;
-(id)data;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

