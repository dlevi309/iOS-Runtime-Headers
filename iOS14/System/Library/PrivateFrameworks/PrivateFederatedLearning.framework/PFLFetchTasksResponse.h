/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PFLFetchTasksResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	NSMutableArray* _tasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * tasks;                //@synthesize tasks=_tasks - In the implementation block
+(Class)tasksType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)tasks;
-(void)mergeFrom:(id)arg1 ;
-(void)clearTasks;
-(id)tasksAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)addTasks:(id)arg1 ;
-(void)setTasks:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)tasksCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

