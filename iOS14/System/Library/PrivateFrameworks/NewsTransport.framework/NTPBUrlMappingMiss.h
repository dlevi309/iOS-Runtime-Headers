/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying> {

	NSString* _host;
	NSMutableArray* _paths;
	NSString* _url;

}

@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NSString * host;                     //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;              //@synthesize paths=_paths - In the implementation block
+(Class)pathsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)paths;
-(void)setHost:(NSString *)arg1 ;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(NSString *)host;
-(unsigned long long)pathsCount;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)url;
-(id)description;
-(BOOL)hasHost;
-(BOOL)hasUrl;
-(void)addPaths:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)clearPaths;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

