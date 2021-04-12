/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoUpdatePushTokenRequest : PBRequest <NSCopying> {

	NSString* _pushToken;

}

@property (nonatomic,readonly) BOOL hasPushToken; 
@property (nonatomic,retain) NSString * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
-(void)setPushToken:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)pushToken;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPushToken;
@end

