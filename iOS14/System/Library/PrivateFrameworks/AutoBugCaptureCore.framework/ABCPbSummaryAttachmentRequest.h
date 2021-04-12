/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {

	NSString* _fileName;
	unsigned _fileSize;
	SCD_Struct_AB4 _has;

}

@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                //@synthesize fileSize=_fileSize - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(unsigned)fileSize;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)fileName;
-(id)description;
-(unsigned long long)hash;
-(void)setFileSize:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFileSize;
-(void)setHasFileSize:(BOOL)arg1 ;
@end

