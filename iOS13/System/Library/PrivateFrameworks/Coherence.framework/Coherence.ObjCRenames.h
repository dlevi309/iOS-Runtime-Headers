/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/


#import <Coherence/Coherence-Structs.h>
@class NSString;

@interface Coherence.ObjCRenames : NSObject {

	 renames;

}

@property (readonly,nonatomic) long long generation; 
@property (readonly,nonatomic) long long count; 
@property (readonly,nonatomic) BOOL hasLocalRenames; 
@property (readonly,nonatomic) NSString * description; 
-(id)init;
-(NSString *)description;
-(long long)count;
-(long long)generation;
-(BOOL)hasLocalRenames;
-(id)renamedWithReplica:(id)arg1 ;
-(id)renamedWithRange:(NSRange)arg1 replica:(id)arg2 ;
-(id)renamed:(long long)arg1 replica:(id)arg2 ;
-(void)addMappingWithReplica:(id)arg1 from:(long long)arg2 ;
-(void)addMappingWithReplica:(id)arg1 fromRange:(NSRange)arg2 ;
@end

