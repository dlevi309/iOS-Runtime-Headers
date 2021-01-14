/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFPBError, NSMutableArray, NSString;

@interface WFPBAskWhenRunRequestResponse : PBCodable <NSCopying> {

	WFPBError* _error;
	NSMutableArray* _inputtedStates;
	NSString* _originatingRequestIdentifier;

}

@property (nonatomic,retain) NSString * originatingRequestIdentifier;              //@synthesize originatingRequestIdentifier=_originatingRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputtedStates;                      //@synthesize inputtedStates=_inputtedStates - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) WFPBError * error;                                    //@synthesize error=_error - In the implementation block
+(Class)inputtedStatesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(WFPBError *)arg1 ;
-(WFPBError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)inputtedStates;
-(void)setInputtedStates:(NSMutableArray *)arg1 ;
-(NSString *)originatingRequestIdentifier;
-(void)setOriginatingRequestIdentifier:(NSString *)arg1 ;
-(void)clearInputtedStates;
-(void)addInputtedStates:(id)arg1 ;
-(unsigned long long)inputtedStatesCount;
-(id)inputtedStatesAtIndex:(unsigned long long)arg1 ;
@end

