/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreData/NSMergePolicy.h>

@interface ICNoteMergePolicy : NSMergePolicy
-(id)init;
-(id)initWithMergeType:(unsigned long long)arg1 ;
-(BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2 ;
-(void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end

