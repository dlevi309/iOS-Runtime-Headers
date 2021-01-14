/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NPKProtoHandleCredentialsChangeRequest : PBRequest <NSCopying> {

	NSMutableArray* _credentialsBytes;
	NSString* _passID;

}

@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                              //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * credentialsBytes;              //@synthesize credentialsBytes=_credentialsBytes - In the implementation block
+(Class)credentialsBytesType;
-(id)dictionaryRepresentation;
-(NSString *)passID;
-(BOOL)hasPassID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCredentialsBytes:(id)arg1 ;
-(unsigned long long)credentialsBytesCount;
-(void)clearCredentialsBytes;
-(id)credentialsBytesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)credentialsBytes;
-(void)setCredentialsBytes:(NSMutableArray *)arg1 ;
@end

