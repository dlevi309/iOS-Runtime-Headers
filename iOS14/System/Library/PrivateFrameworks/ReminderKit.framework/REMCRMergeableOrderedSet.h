/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMReplicaIDSource, CRDocument, NSMutableArray, NSOrderedSet;

@interface REMCRMergeableOrderedSet : NSObject <NSCopying, NSSecureCoding> {

	REMReplicaIDSource* _replicaIDSource;
	CRDocument* _document;
	NSMutableArray* _undos;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;              //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) CRDocument * document;                             //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSMutableArray * undos;                          //@synthesize undos=_undos - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * orderedSet; 
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)serializedData;
-(REMReplicaIDSource *)replicaIDSource;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id*)arg3 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)mutableOrderedSet;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexOfEqualObject:(id)arg1 ;
-(id)mergedOrderedSetWithOrderedSet:(id)arg1 error:(id*)arg2 ;
-(id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 ;
-(CRDocument *)document;
-(id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 undos:(id)arg3 ;
-(id)initWithReplicaIDSource:(id)arg1 orderedSet:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSOrderedSet *)orderedSet;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)undos;
@end

