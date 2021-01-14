/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSString *)partition;
-(void)setPartition:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setServiceBuild:(NSString *)arg1 ;
-(void)setServiceInstance:(NSString *)arg1 ;
-(BOOL)hasPartition;
-(BOOL)hasServiceBuild;
-(BOOL)hasServiceInstance;
-(NSString *)serviceBuild;
-(NSString *)serviceInstance;
@end

