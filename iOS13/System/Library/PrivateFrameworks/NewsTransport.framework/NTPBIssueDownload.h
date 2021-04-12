/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT4 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)downloadState;
-(void)setDownloadState:(int)arg1 ;
-(void)setHasDownloadState:(BOOL)arg1 ;
-(BOOL)hasDownloadState;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(BOOL)hasIssueData;
-(NTPBIssueData *)issueData;
-(int)downloadLocation;
-(void)setDownloadLocation:(int)arg1 ;
-(void)setHasDownloadLocation:(BOOL)arg1 ;
-(BOOL)hasDownloadLocation;
-(int)downloadType;
-(void)setDownloadType:(int)arg1 ;
-(void)setHasDownloadType:(BOOL)arg1 ;
-(BOOL)hasDownloadType;
@end

