/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSData* _infoDictionary;
	NSString* _seid;
	NSData* _url;

}

@property (nonatomic,retain) NSData * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * seid;                       //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSString * command;                    //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasInfoDictionary; 
@property (nonatomic,retain) NSData * infoDictionary;               //@synthesize infoDictionary=_infoDictionary - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)infoDictionary;
-(id)dictionaryRepresentation;
-(NSData *)url;
-(void)setInfoDictionary:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUrl:(NSData *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(void)setSeid:(NSString *)arg1 ;
-(NSString *)seid;
-(BOOL)hasInfoDictionary;
@end

