/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBIssueData, NSString;

@interface NTPBIssueDownload : PBCodable <NSCopying> {

	int _downloadLocation;
	int _downloadState;
	int _downloadType;
	NTPBIssueData* _issueData;
	NSString* _sourceChannelId;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;               //@synthesize issueData=_issueData - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadLocation; 
@property (assign,nonatomic) int downloadLocation;                    //@synthesize downloadLocation=_downloadLocation - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadState; 
@property (assign,nonatomic) int downloadState;                       //@synthesize downloadState=_downloadState - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadType; 
@property (assign,nonatomic) int downloadType;                        //@synthesize downloadType=_downloadType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(NTPBIssueData *)issueData;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(int)downloadState;
-(void)mergeFrom:(id)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(int)downloadLocation;
-(void)setDownloadLocation:(int)arg1 ;
-(void)setHasDownloadLocation:(BOOL)arg1 ;
-(BOOL)hasDownloadLocation;
-(void)setHasDownloadType:(BOOL)arg1 ;
-(BOOL)hasDownloadType;
-(id)description;
-(BOOL)hasDownloadState;
-(void)setDownloadState:(int)arg1 ;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(void)setHasDownloadState:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDownloadType:(int)arg1 ;
-(int)downloadType;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

