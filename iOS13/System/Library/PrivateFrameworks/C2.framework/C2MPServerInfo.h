/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPServerInfo : PBCodable <NSCopying> {

	NSString* _partition;
	NSString* _serviceBuild;
	NSString* _serviceInstance;
	NSString* _serviceName;

}

@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasPartition; 
@property (nonatomic,retain) NSString * partition;                    //@synthesize partition=_partition - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceBuild; 
@property (nonatomic,retain) NSString * serviceBuild;                 //@synthesize serviceBuild=_serviceBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceInstance; 
@property (nonatomic,retain) NSString * serviceInstance;              //@synthesize serviceInstance=_serviceInstance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(void)setPartition:(NSString *)arg1 ;
-(void)setServiceBuild:(NSString *)arg1 ;
-(void)setServiceInstance:(NSString *)arg1 ;
-(BOOL)hasPartition;
-(BOOL)hasServiceBuild;
-(BOOL)hasServiceInstance;
-(NSString *)partition;
-(NSString *)serviceBuild;
-(NSString *)serviceInstance;
@end

