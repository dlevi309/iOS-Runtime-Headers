/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)host;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(void)setHost:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)paths;
-(BOOL)hasHost;
-(BOOL)hasUrl;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(void)addPaths:(id)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
@end

