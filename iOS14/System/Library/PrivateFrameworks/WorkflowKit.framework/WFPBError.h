/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBError : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;
	NSString* _localizedDescription;
	NSString* _localizedFailureReason;

}

@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                                 //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedFailureReason; 
@property (nonatomic,retain) NSString * localizedFailureReason;              //@synthesize localizedFailureReason=_localizedFailureReason - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)localizedFailureReason;
-(BOOL)hasLocalizedDescription;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setCode:(long long)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(unsigned long long)hash;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(long long)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLocalizedFailureReason;
-(void)setLocalizedFailureReason:(NSString *)arg1 ;
@end

