/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PFLFetchPatchRequest : PBRequest <NSCopying> {

	NSString* _taskId;

}

@property (nonatomic,readonly) BOOL hasTaskId; 
@property (nonatomic,retain) NSString * taskId;              //@synthesize taskId=_taskId - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)taskId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTaskId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTaskId;
@end

