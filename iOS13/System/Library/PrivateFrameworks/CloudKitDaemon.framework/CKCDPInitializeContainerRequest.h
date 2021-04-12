/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPInitializeContainerRequest : PBRequest <NSCopying> {

	NSString* _containerName;
	NSString* _environment;
	NSString* _path;

}

@property (nonatomic,readonly) BOOL hasContainerName; 
@property (nonatomic,retain) NSString * containerName;              //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment;                //@synthesize environment=_environment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEnvironment;
-(BOOL)hasPath;
-(BOOL)hasContainerName;
@end

