/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)generation;
-(id)init;
-(long long)count;
-(NSString *)description;
-(BOOL)hasLocalRenames;
-(id)renamedWithReplica:(id)arg1 ;
-(id)renamedWithRange:(NSRange)arg1 replica:(id)arg2 ;
-(id)renamed:(long long)arg1 replica:(id)arg2 ;
-(void)addMappingWithReplica:(id)arg1 from:(long long)arg2 ;
-(void)addMappingWithReplica:(id)arg1 fromRange:(NSRange)arg2 ;
@end

