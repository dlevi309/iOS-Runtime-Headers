/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATPError;

@interface ATPResponse : PBCodable <NSCopying> {

	ATPError* _error;

}

@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) ATPError * error;              //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(ATPError *)arg1 ;
-(ATPError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

