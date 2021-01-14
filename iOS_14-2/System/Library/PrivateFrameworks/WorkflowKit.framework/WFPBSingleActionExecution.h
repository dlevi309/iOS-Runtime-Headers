/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface WFPBSingleActionExecution : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSMutableArray* _inputs;
	NSMutableArray* _processedParameters;
	NSData* _serializedParameters;
	NSMutableArray* _variables;

}

@property (nonatomic,retain) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variables;                        //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedParameters;              //@synthesize processedParameters=_processedParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                     //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputs;                           //@synthesize inputs=_inputs - In the implementation block
+(Class)inputType;
+(Class)variablesType;
+(Class)processedParametersType;
-(id)dictionaryRepresentation;
-(void)setInputs:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addInput:(id)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)variables;
-(NSString *)actionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)inputs;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSerializedParameters;
-(NSMutableArray *)processedParameters;
-(void)setProcessedParameters:(NSMutableArray *)arg1 ;
-(void)clearVariables;
-(void)addVariables:(id)arg1 ;
-(unsigned long long)variablesCount;
-(id)variablesAtIndex:(unsigned long long)arg1 ;
-(void)clearProcessedParameters;
-(void)addProcessedParameters:(id)arg1 ;
-(unsigned long long)processedParametersCount;
-(id)processedParametersAtIndex:(unsigned long long)arg1 ;
-(void)clearInputs;
-(unsigned long long)inputsCount;
-(id)inputAtIndex:(unsigned long long)arg1 ;
-(void)setVariables:(NSMutableArray *)arg1 ;
@end

