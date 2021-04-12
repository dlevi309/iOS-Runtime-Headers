/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, WFPBError, NSString;

@interface WFPBAceCommandRequestResponse : PBCodable <NSCopying> {

	NSData* _aceCommandResponseData;
	WFPBError* _error;
	NSString* _originatingRequestIdentifier;

}

@property (nonatomic,retain) NSString * originatingRequestIdentifier;              //@synthesize originatingRequestIdentifier=_originatingRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSData * aceCommandResponseData;                      //@synthesize aceCommandResponseData=_aceCommandResponseData - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) WFPBError * error;                                    //@synthesize error=_error - In the implementation block
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
-(NSString *)originatingRequestIdentifier;
-(void)setOriginatingRequestIdentifier:(NSString *)arg1 ;
-(NSData *)aceCommandResponseData;
-(void)setAceCommandResponseData:(NSData *)arg1 ;
@end

