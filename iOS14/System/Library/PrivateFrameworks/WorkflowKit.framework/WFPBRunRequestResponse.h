/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface WFPBRunRequestResponse : PBCodable <NSCopying> {

	NSData* _errorData;
	NSMutableArray* _outputDatas;
	NSString* _runRequestIdentifier;
	NSMutableArray* _variablesDatas;

}

@property (nonatomic,retain) NSString * runRequestIdentifier;              //@synthesize runRequestIdentifier=_runRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variablesDatas;              //@synthesize variablesDatas=_variablesDatas - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDatas;                 //@synthesize outputDatas=_outputDatas - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                           //@synthesize errorData=_errorData - In the implementation block
+(Class)variablesDataType;
+(Class)outputDataType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)runRequestIdentifier;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(void)clearVariablesDatas;
-(void)addVariablesData:(id)arg1 ;
-(unsigned long long)variablesDatasCount;
-(id)variablesDataAtIndex:(unsigned long long)arg1 ;
-(void)clearOutputDatas;
-(void)addOutputData:(id)arg1 ;
-(unsigned long long)outputDatasCount;
-(id)outputDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasErrorData;
-(void)setRunRequestIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)variablesDatas;
-(void)setVariablesDatas:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputDatas;
-(void)setOutputDatas:(NSMutableArray *)arg1 ;
@end

