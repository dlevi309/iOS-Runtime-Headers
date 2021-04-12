/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface SYLogErrorInfo : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;

}

@property (nonatomic,readonly) NSError * cocoaError; 
@property (nonatomic,retain) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                      //@synthesize code=_code - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(long long)code;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setCode:(long long)arg1 ;
-(id)initWithCocoaError:(id)arg1 ;
-(NSError *)cocoaError;
@end

