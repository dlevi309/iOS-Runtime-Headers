/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying> {

	NSData* _report;
	NSString* _virtualDeviceID;

}

@property (nonatomic,readonly) BOOL hasVirtualDeviceID; 
@property (nonatomic,retain) NSString * virtualDeviceID;              //@synthesize virtualDeviceID=_virtualDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasReport; 
@property (nonatomic,retain) NSData * report;                         //@synthesize report=_report - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)report;
-(void)setReport:(NSData *)arg1 ;
-(void)setVirtualDeviceID:(NSString *)arg1 ;
-(BOOL)hasVirtualDeviceID;
-(NSString *)virtualDeviceID;
-(BOOL)hasReport;
@end

