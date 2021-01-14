/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoRegistrationDataRequest : PBRequest <NSCopying> {

	NSString* _authToken;

}

@property (nonatomic,readonly) BOOL hasAuthToken; 
@property (nonatomic,retain) NSString * authToken;              //@synthesize authToken=_authToken - In the implementation block
-(void)setAuthToken:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAuthToken;
-(NSString *)authToken;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

