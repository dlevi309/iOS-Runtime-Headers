/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCheckContainerHealthRequest : PBRequest <NSCopying> {

	NSString* _containerName;
	NSString* _environment;

}

@property (nonatomic,readonly) BOOL hasContainerName; 
@property (nonatomic,retain) NSString * containerName;              //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment;                //@synthesize environment=_environment - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasEnvironment;
-(void)mergeFrom:(id)arg1 ;
-(void)setContainerName:(NSString *)arg1 ;
-(id)description;
-(void)setEnvironment:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)containerName;
-(NSString *)environment;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasContainerName;
@end

