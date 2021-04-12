/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying> {

	NSString* _operationGroupId;
	NSString* _operationGroupName;
	BOOL _operationGroupTriggered;
	SCD_Struct_C25 _has;

}

@property (nonatomic,readonly) BOOL hasOperationGroupId; 
@property (nonatomic,retain) NSString * operationGroupId;                  //@synthesize operationGroupId=_operationGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) BOOL hasOperationGroupTriggered; 
@property (assign,nonatomic) BOOL operationGroupTriggered;                 //@synthesize operationGroupTriggered=_operationGroupTriggered - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)operationGroupName;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(BOOL)hasOperationGroupName;
-(BOOL)hasOperationGroupId;
-(NSString *)operationGroupId;
-(void)setOperationGroupTriggered:(BOOL)arg1 ;
-(void)setHasOperationGroupTriggered:(BOOL)arg1 ;
-(BOOL)hasOperationGroupTriggered;
-(BOOL)operationGroupTriggered;
@end

